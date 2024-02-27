#include "binary_trees.h"
/**
 * binary_tree_depth - calculates depth of a node in a binary tree
 * @tree: the node to be checked
 * Return: depth or 0 on failure
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (n);
	n += (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (n);
}
