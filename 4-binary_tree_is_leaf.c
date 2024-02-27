#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if any node is a leaf in a binary tree
 * @node: the node to be checked
 * Return: 1 if true else return 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
