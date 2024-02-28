#include "binary_trees.h"

int helper_isFull(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if the tree is FULL
 * @tree: the tree to be checked
 * Return: 1 if FULL or 0 if not and on FAILURE
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (helper_isFull(tree));
}

/**
 * helper_isFull - helps binary_tree_full
 * @tree: the tree to be checked
 * Return: 1 if FULL or 0 if not and on FAILURE
*/
int helper_isFull(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			helper_isFull(tree->left) == 0 ||
			helper_isFull(tree->right) == 0)
			return (0);
	}
	return (1);
}
