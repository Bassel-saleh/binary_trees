#include "binary_trees.h"
/***/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *seed = malloc(sizeof(binary_tree_t));

    if (!parent || !seed)
    {
        free(seed);
        return (NULL);
    }
    seed-
}