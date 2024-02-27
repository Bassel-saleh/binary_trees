#include"binary_trees.h"
/**
 * binary_tree_node - adds new node to a binary tree
 * @parent: root of the node
 * @value: the new node data
 * Return: node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *seed = malloc(sizeof(binary_tree_t));

	if (seed == NULL)
	{
		free(seed);
		return (NULL);
	}
	seed->n = value;
	seed->parent = parent;
	seed->left = NULL;
	seed->right = NULL;
	return (seed);
}
