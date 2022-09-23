#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a right-child, the new node must take its
 * place and the old right-child must be set as the right-child of the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);

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
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
