#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node:(cst)ptr->node
*
* Return: (int)bool
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);
	return (0);
}

