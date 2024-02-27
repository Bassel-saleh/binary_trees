#include "binary_trees.h"
/**
 * binary_tree_leaves - calculates leaves of binary tree
 * @tree: the tree to be checked
 * Return: number of leaves or 0 on FAILURE
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			n += 1;
		n += binary_tree_leaves(tree->left);
		n += binary_tree_leaves(tree->right);
	}
	return (n);
}
