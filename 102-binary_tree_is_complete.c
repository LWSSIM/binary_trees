#include "binary_trees.h"


/**
* binary_tree_size - measure the size of a BT
* @tree: ptr->root
*
* Return: 0 || size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}

/**
 * bt_is_complete_recursive - helper function to check if bt is complete
 * @tree: ptr->root
 * @index: node's index
 * @size: tree size
 *
 * Return: 1 || 0
 */
int bt_is_complete_recursive(const binary_tree_t *tree, int index, int size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (bt_is_complete_recursive(tree->left, 2 * index + 1, size) &&
		bt_is_complete_recursive(tree->right, 2 * index + 2, size));
}

/**
* binary_tree_is_complete - checks if a BT is complete
* @tree: ptr->root
*
* Return: 1 || 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size = binary_tree_size(tree);

	if (!tree)
		return (0);

	return (bt_is_complete_recursive(tree, 0, size));
}

