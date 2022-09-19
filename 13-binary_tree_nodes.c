#include "binary_trees.h"

/**
 * binary_tree_nodes - check code
 * @tree: pointer count the number of nodes
 * Return: 0 or number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	return (0);
}
