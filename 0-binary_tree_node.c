#include "binary_trees.h"



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	// parent es el puntero al nodo padre a crear
	// value es el valor a poner en el nodo

	binary_tree_t *nnode;

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode = malloc(sizeof(binary_tree_t));

	nnode->parent = parent;
	nnode->value = value;


	return (nnode);
}
