#include "binary_trees.h"

/**
 * @brief
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    int size = 0;
    if (tree == NULL)
        return 0;
    else
    {
        size += 1;
        size += binary_tree_size(tree->left);
        size += binary_tree_size(tree->right);
        return size;
    }
}