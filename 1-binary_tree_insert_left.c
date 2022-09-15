#include "binary_trees.h"

/**
 *
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
	{
		return (NULL);
	}

	if (value < parent->n && parent != NULL)
	{
		binary_tree_insert_left(parent->left, value);
	}
	else
	{
		return (NULL);
	}
	return (nnode);
}
