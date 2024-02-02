#include "binary_trees.h"

/**
 * is_on_path - check if paths cross
 * @ancestor: ptr
 * @target: ptr
 *
 * Return: int
 */
int is_on_path(const binary_tree_t *ancestor, const binary_tree_t *target)
{
	if (!ancestor)
		return (0);

	if (ancestor == target)
		return (1);

	return (is_on_path(ancestor->left, target) ||
	is_on_path(ancestor->right, target));
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

