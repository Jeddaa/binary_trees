#include "binary_trees.h"
/**
 * @brief
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int n = 0;
    if (tree == NULL)
        return 0;
    if (tree->left || tree->right)
    {
        n++;
    }
    n += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    return n;
}
