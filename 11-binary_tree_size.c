#include "binary_trees.h"


/**
* binary_tree_size - measure the size of a BT
* @tree: ptr->root
*
* Return: 0 || size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}

