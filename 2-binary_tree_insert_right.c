#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts tree on the left size
 * @parent: root of the node
 * @value: is the data in the node
 * Return: node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *seed;

	if (parent == NULL)
	{
		return (NULL);
	}
	seed = binary_tree_node(parent, value);
	if (seed == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		seed->right = parent->right;
		parent->right->parent = seed;
	}
	parent->right = seed;
	return (seed);
}