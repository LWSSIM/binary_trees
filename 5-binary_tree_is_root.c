#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is root
* @node: ptr->node
*
* Return: (int)bool
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}

