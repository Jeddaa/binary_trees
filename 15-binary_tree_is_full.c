#include "binary_trees.h"

/**
 * @brief
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

    if (tree == NULL)
    {
        return 0;
    }
    if (tree->left == NULL && tree->right == NULL)
        return 1;
    if (tree->left != NULL && tree->right != NULL)
    {
        if (binary_tree_is_full(tree->left) == 0 || binary_tree_is_full(tree->right) == 0)
            return 0;
        return 1;
    }
    return 0;
}