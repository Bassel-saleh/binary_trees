#include "binary_trees.h"
/***/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (n);
	n += (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (n);
}
