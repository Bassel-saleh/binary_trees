#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the tree is FULL
 * @tree: the tree to be checked
 * Return: 1 if FULL or 0 if not and on FAILURE
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 0, l = 0, r = 0;

	if (tree)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		n = l || r ? 0 : 1;
	}
	return (n);
}
