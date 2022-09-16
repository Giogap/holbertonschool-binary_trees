#include "binary_trees.h"

/**
 * binary_tree_postorder - check code
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
}
