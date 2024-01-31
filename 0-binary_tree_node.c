#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: ptr->parent_node
 * @value: int data value of new node
 *
 * Return: ptr->new_node || NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

