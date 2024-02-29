#include "binary_trees.h"
/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: root node of BST to be search
 * @value: The value eo be searched for in the tree
 * Return: node containing a value equals to value
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
