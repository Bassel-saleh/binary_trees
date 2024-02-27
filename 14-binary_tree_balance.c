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
	{
		if (tree->left)
		{
			n += 1;
			n += binary_tree_balance(tree->left);
		}
		if (tree->right)
		{
			n -= 1;
			n -= binary_tree_balance(tree->right);
		}
	}
	return (n);
}
