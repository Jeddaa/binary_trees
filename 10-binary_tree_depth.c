#include "binary_trees.h"

/**
 * @brief
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    // // int dep = 0;
    // int depth_left = binary_tree_depth(tree->left);
    // int depth_right = binary_tree_depth(tree->right);

    // if (depth_left < depth_right)
    //     return depth_left + 1;
    // else
    //     return depth_right + 1;
    int i;

    for (i = 0; tree && tree->parent; ++i)
        tree = tree->parent;
    return (i);
}