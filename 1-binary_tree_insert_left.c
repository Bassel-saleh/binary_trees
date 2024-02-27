#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts tree on the left size
 * @parent: root of the node
 * @value: is the data in the node
 * Return: node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *seed = malloc(sizeof(binary_tree_t));

	if (!parent || !seed)
	{
		free(seed);
		return (NULL);
	}
	seed->n = value;
	if (parent->left == NULL)
		parent->left = seed;
	else
	{
		seed->left = parent->left;
		parent->left->parent = seed;
		parent->left = seed;
	}
	seed->parent = parent;
	return (seed);
}
