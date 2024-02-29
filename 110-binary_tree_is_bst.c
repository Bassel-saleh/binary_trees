#include "binary_trees.h"

int help_is_bst(const binary_tree_t *tree, int low, int high);

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: the root of the binary tree to be checked
 * Return: 1 If TRUE or 0 if false and FAILURE
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (help_is_bst(tree, INT_MIN, INT_MAX));
}

/**
 * help_is_bst - Checks if a binary tree is a valid binary search tree
 * @tree: node of the tree to be checked
 * @low: The value of the smallest node
 * @high: The value of the largest node
 * Return: 1 If TRUE or 0 if false
*/
int help_is_bst(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (help_is_bst(tree->left, low, tree->n - 1) &&
			help_is_bst(tree->right, tree->n + 1, high));
	}
	return (1);
}
