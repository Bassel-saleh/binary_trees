#include "binary_trees.h"
/**
 * binary_tree_balance - calculate the balance of a binary tree
 * @tree: the tree root to be checked
 * Return: balance or 0 on FAILURE
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int n = 0;

	if (tree)
		n += (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (n);
}

/**
 * binary_tree_height - calculates the heigh of a binary tree
 * @tree: the binary tree to be calculated
 * Return: the height or 0 on failure
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
