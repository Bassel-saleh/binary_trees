#include "binary_trees.h"
/**
 * binary_tree_height - calculates the heigh of a binary tree
 * @tree: the binary tree to be calculated
 * Return: the height or 0 on failure
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (l);
	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((l > r) ? l : r);
}
