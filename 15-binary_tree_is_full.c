#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the tree is FULL
 * @tree: the tree to be checked
 * Return: 1 if FULL or 0 if not and on FAILURE
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			binary_tree_is_full(tree->left) == 0 ||
			binary_tree_is_full(tree->right) == 0)
			return (0);

	}
	return (1);
}
