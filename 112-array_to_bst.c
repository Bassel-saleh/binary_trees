#include "binary_trees.h"
/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: first element of the array to be converted
 * @size: The number of element in the array
 * Return: root node of the created BST or NULL on FAILURE
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t x, y;

	if (array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
		{
			if (array[y] == array[x])
				break;
		}
		if (y == x)
		{
			if (bst_insert(&tree, array[x]) == NULL)
				return (NULL);
		}
	}
	return (tree);
}
