#include "binary_trees.h"

/**
 * binary_tree_sibling - check code
 * @node: pointer to the node to find the sibling
 * Return: ointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{



	return (node->parent->left);
}
