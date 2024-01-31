#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: ptr->poarent_node
* @value:ptr->int_value data
*
* Return: ptr->new_node || NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}

