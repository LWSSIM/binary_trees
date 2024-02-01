#include "binary_trees.h"

/**
* binary_tree_height - Function to calculate the height of a binary tree
* @tree: ptr->root
*
* Return: size_t
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
* binary_tree_balance - Measure balance factor of Btree
* @tree: ptr->root
*
* Desc: balance = left_height  - right_height
* Return: int || 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int Lheight, Rheight;

	if (!tree)
		return (0);

	Lheight = binary_tree_height(tree->left);
	Rheight = binary_tree_height(tree->right);

	return (Lheight - Rheight);
}

