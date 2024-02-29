#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: binary tree node to be rotated
 * Return: root node after rotation
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot_node, *temp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	pivot_node = tree->right;
	temp = pivot_node->left;
	pivot_node->left = tree;
	tree->right = temp;
	if (temp != NULL)
		temp->parent = tree;
	temp = tree->parent;
	tree->parent = pivot_node;
	pivot_node->parent = temp;
	if (temp != NULL)
	{
		if (temp->left == tree)
			temp->left = pivot_node;
		else
			temp->right = pivot_node;
	}
	return (pivot_node);
}
