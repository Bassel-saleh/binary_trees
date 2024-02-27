#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using in-order traversal
 * @tree: the tree to be checked
 * @func: the function to print data of nodes
 * Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
