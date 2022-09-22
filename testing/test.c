#include "binary_trees.h"

// binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
// {
//     binary_tree_t *new_node;
//     new_node = malloc(sizeof(binary_tree_t));
//     if (new_node == NULL)
//     {
//         return NULL;
//     }
//     new_node->parent = parent;
//     new_node->n = value;
//     new_node->left = NULL;
//     new_node->right = NULL;
//     return new_node;
// }

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *temp;
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL || parent == NULL)
    {
        return NULL;
    }
    else
    {
        new_node->parent = parent;
        new_node->n = value;
        new_node->right = NULL;
        if (parent->left != NULL)
        {
            temp = parent->left;
            parent->left = new_node;
            temp->parent = new_node;
            new_node->left = temp;
        }
        else
        {
            parent->left = new_node;
            new_node->left = NULL;
        }
        return new_node;
    }
}

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *temp2;
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL || parent == NULL)
        return NULL;
    else
    {
        new_node->parent = parent;
        new_node->n = value;
        new_node->left = NULL;
        if (parent->right != NULL)
        {
            temp2 = parent->right;
            parent->right = new_node;
            temp2->parent = new_node;
            new_node->right = temp2;
        }
        else
        {
            parent->right = new_node;
            new_node->right = NULL;
        }
        return new_node;
    }
}

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}

int binary_tree_is_leaf(const binary_tree_t *node)
{
}