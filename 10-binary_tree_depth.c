#include "binary_trees.h"


/**
* binary_tree_depth - measures depth of binary tree
* @tree: ptr->root
*
* Return: 0 || size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

