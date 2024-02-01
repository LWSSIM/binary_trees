#include "binary_trees.h"


/**
* binary_tree_is_full - check if BT is full
* @tree: ptr->root
*
* Desc: full = (2 || 0) children each
*
* Return: int || 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

