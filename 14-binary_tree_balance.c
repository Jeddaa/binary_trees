#include "binary_trees.h"

/**
 * @brief
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    else
    {
        int height_left = binary_tree_height(tree->left);
        int height_right = binary_tree_height(tree->right);

        if (height_left > height_right)
            return height_left + 1;
        else
            return height_right + 1;
    }
}

int binary_tree_balance(const binary_tree_t *tree)
{
    int left, right;
    if (tree == NULL)
    {
        return 0;
    }
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);
    return left - right;
}