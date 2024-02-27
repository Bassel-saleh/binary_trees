#include"binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *seed = malloc(sizeof(binary_tree_t));;

	if (value = NULL)
		return (NULL);
	seed->n = value;
	seed->parent = parent;
	seed->right = NULL;
	seed->left = NULL;
	return (seed);
}