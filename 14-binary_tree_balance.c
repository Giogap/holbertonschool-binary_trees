#include "binary_trees.h"

/**
* binary_tree_balance - check code
* @tree: a pointer the height.
* Return: height or 0
*/

int binary_tree_balance(const binary_tree_t *tree)


{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (height_l - height_r);

}
