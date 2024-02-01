#include "binary_trees.h"


/**
* binary_tree_inorder - In-Order traversal
* @tree: ptr->root
* @func: ptr->function (called with n for each node)
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

