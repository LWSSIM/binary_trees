#include "binary_trees.h"


/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
*	(applies a function to all traverssed nodes)
* @tree: ptr->root
* @func: ptr->function to call for each node (takes the value as parameter)
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

