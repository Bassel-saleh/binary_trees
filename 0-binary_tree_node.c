#include"binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *seed = malloc(sizeof(binary_tree_t));;

	seed->n = value;
	if (seed->n == NULL)
	{
		return (NULL);
	}
	seed->parent = parent;
	seed->right = NULL;
	seed->left = NULL;
	return (seed);
}