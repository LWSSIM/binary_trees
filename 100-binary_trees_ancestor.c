#include "binary_trees.h"

/**
 * is_on_path - check if paths cross
 * @node: ptr
 * @target: ptr
 *
 * Desc: check if target node is found as a descendant of the node
 *
 * Return: int
 */
int is_on_path(const binary_tree_t *node, const binary_tree_t *target)
{
	if (!node)
		return (0);

	if (node == target)
		return (1);

	return (is_on_path(node->left, target) ||
	is_on_path(node->right, target));
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: ptr->first
 * @second: ptr->second
 *
 * Return: (node)L.C.A || NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
																		 const binary_tree_t *second)
{
	const binary_tree_t *ancestor = NULL;

	if (!first || !second)
		return (NULL);

	ancestor = first;

	while (ancestor)
	{
		if (is_on_path(ancestor, second))
			return ((binary_tree_t *)ancestor);

		ancestor = ancestor->parent;
	}
	return (NULL);
}

