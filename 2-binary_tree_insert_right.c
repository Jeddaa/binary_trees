#include "binary_trees.h"

/**
 * @brief
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *temp;
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node != NULL)
    {
        new_node->parent = parent;
        new_node->n = value;
        new_node->left = NULL;

        if (parent->right != NULL)
        {
            temp = parent->right;
            parent->right = new_node;
            temp->parent = new_node;
            new_node->right = temp;
        }

        else
        {
            parent->right = new_node;
            new_node->right = NULL;
        }
        return new_node;
    }
    free(new_node);
    return NULL;
}