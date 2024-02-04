#include "binary_trees.h"


/**
* binary_tree_height - measure height of passed tree
* @tree: ptr->root
*
* Return: 0 || int
*
* Description:
*  Recursively calculate the height of the left and the right subtrees
*  of a node and assign height to the node as max of the heights
*  of two children plus 1.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}

/**
 * level_order_helper - Performs traversal recursevely
 * @tree: ptr->root
 * @level: node's level (int)
 * @func: ptr->func (called for each node)
 */
void level_order_helper(const binary_tree_t *tree, int level, void(*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		level_order_helper(tree->left, level - 1, func);
		level_order_helper(tree->right, level - 1, func);
	}
}

/**
* binary_tree_levelorder - level-order traversal
* @tree: ptr->root
* @func: ptr->function (called on each node)
*
* Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0;
	int level = 0;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (level = 1; level <= (int)height; level++)
		level_order_helper(tree, level, func);
}

