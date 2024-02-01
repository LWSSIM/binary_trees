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
	size_t Ldepth = 0, Rdepth = 0;

	if (!tree)
		return (0);

	if (tree->left)
		Ldepth = binary_tree_height(tree->left) + 1;
	if (tree->right)
		Rdepth = binary_tree_height(tree->right) + 1;

	if (Ldepth > Rdepth)
		return (Ldepth);
	return (Rdepth);
}

