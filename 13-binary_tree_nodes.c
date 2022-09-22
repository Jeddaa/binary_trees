#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 *
 * Description: A NULL pointer is not a node
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int n = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		n++;
	}
	n += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (n);
}
