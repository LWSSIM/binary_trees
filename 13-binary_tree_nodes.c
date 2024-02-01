#include "binary_trees.h"


/**
* binary_tree_nodes - Counts the nodes with atleast 1 child
* @tree: ptr->root
*
* Return: 0 || size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right || tree->left)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}

