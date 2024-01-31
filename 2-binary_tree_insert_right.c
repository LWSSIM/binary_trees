#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a node as the right child of current
 * @parent: ptr->parent_node
 * @value: int node.data
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return NULL;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new)
		return NULL;

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new->right;
	}

	parent->right = new;

	return (new);
}

