#include "binary_trees.h"
/**
 * binary_tree_nodes - conts nodes with at least one child node
 * @tree: the root node to be checked
 * Return: number of nodes or 0 on FAILURE
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			n += 1;
			n += binary_tree_nodes(tree->left);
			n += binary_tree_nodes(tree->right);
		}
	}
	return (n);
}
