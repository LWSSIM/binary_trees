#include "binary_trees.h"


/**
* binary_tree_height - measure height of passed tree
* @tree: ptr->root
*
* Return: 0 || int
*
* Description:
*  Recursively calculate the height of the left and the right subtrees
*  of a node and assign height to the node as max of the heights
*  of two children plus 1.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}

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

/**
* binary_tree_is_perfect - Is BT perfect
* @tree: ptr->root
*
* Return: 0 || 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Bitwise op == (2**height) */
	return ((size_t)(1 << height) - 1 == size);
}

