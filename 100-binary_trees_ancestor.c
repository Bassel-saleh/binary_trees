#include "binary_trees.h"

size_t get_depth(const binary_tree_t *tree);
binary_tree_t *help_ancestor(const binary_tree_t *first,
	const binary_tree_t *second, size_t depth_first, size_t depth_second);

/***/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	return (help_ancestor(first, second, get_depth(first), get_depth(second)));
}

/***/
binary_tree_t *help_ancestor(const binary_tree_t *first,
	const binary_tree_t *second, size_t depth_first, size_t depth_second)
{
	size_t f = depth_first, s = depth_second;
	binary_tree_t *parent_f, *parent_s;

	parent_f = first->parent, parent_s = second->parent;
	while (f > s)
	{
		if (parent_f == second)
			return ((binary_tree_t *)second);
		f--;
		parent_f = parent_f->parent;	
	}
	while (f < s)
	{
		if (parent_s == first)
			return ((binary_tree_t *)first);
		s--;
		parent_s = parent_s->parent;
	}
	while (parent_f && parent_s && parent_f != parent_s)
	{
		parent_f = parent_f->parent;
		parent_s = parent_s->parent;
	}
	return (parent_f == parent_s ? parent_f : NULL);
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
