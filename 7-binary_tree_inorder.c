#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using in-order traversal
 * @tree: the tree to be checked
 * @func: the function to print data of nodes
 * Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
