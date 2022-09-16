#include "binary_trees.h"

/**
 * binary_tree_insert_right - check code
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	nnode = binary_tree_node(parent, value);
	if (nnode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		nnode->right = parent->right;
		parent->right->parent = nnode;
	}
	parent->right = nnode;
	return (nnode);
}
