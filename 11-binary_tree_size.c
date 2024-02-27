#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: the tree to be calculated
 * Return: size or 0 on failure
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (n);
	n += binary_tree_size(tree->left);
	n += binary_tree_size(tree->right);
	n += 1;
	return (n);
}
