#include "binary_trees.h"

/**
 * binary_tree_node - check code
 * @parent: node parent
 * @value: value node
 * Return: nnode or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	nnode = malloc(sizeof(binary_tree_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->parent = parent;
	nnode->n = value;
	nnode->left = NULL;
	nnode->right = NULL;

	return (nnode);
}
