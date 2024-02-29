#include "binary_trees.h"

unsigned int is_leaf(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
size_t get_depth(const binary_tree_t *tree);
int helper_isPerfect(const binary_tree_t *tree,
	size_t leaf_depth, size_t level);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to be checked
 * Return: return 1 if true 0 if not or on FAILURE
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (helper_isPerfect(tree, get_depth(get_leaf(tree)), 0));
}

/**
 * helper_isPerfect - helps to find if tree is perfect
 * @tree: the tree to be checked
 * @leaf_depth: the depth of the tree
 * @level: the level which the current node being checked
 * Return: 1 if TRUE or 0 if FALSE
*/
int helper_isPerfect(const binary_tree_t *tree,
	size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (helper_isPerfect(tree->left, leaf_depth, level + 1) &&
		helper_isPerfect(tree->right, leaf_depth, level + 1));
}

/**
 * get_depth - gets the depth of the current node
 * @tree: the curent node
 * Return: the depth of the node
*/
size_t get_depth(const binary_tree_t *tree)
{
	return (tree->parent ? 1 + get_depth(tree->parent) : 0);
}

/**
 * get_leaf - finds the leaf of the current tree
 * @tree: the tree to be checked
 * Return: the leaves of the tree
*/
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_leaf - checks if current node is leaf
 * @tree: current node
 * Return: 1 if TRUE or 0 if FALSE
*/
unsigned int is_leaf(const binary_tree_t *tree)
{
	return (tree->left == NULL && tree->right == NULL ? 1 : 0);
}
