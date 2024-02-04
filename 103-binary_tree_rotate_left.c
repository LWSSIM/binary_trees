#include "binary_trees.h"


/**
* binary_tree_rotate_left - performs a left-rotation on a bt
* @tree: ptr->root
*
* Return: ptr->new_tree || NULL
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->right)
		return (tree);

	new_root = tree->right;
	tree->right = new_root->left;
	new_root->left = tree;
	new_root->parent = tree->parent;

	if (tree->right)
		tree->right->parent = tree;

	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = new_root;
		else
		 tree->parent->right = new_root;
	}
	tree->parent = new_root;

	return (new_root);
}

