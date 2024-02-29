#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node to be checked
 * Return: the sibling node or NULL on FAILURE
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
