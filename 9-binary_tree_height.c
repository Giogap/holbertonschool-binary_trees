#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_height - check code
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	height_l = binary_tree_height(tree->left) + 1;
	height_r = binary_tree_height(tree->right) + 1;

	if (height_l >= height_r)
	{
		return (height_l);
	}
	else
	{
		return (height_r);
	}
}
