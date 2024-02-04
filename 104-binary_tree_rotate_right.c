#include "binary_trees.h"


/**
* binary_tree_rotate_right - performs a right rotation to BT
* @tree: ptr->root
*
* Return: ptr->root || NULL
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (tree);

	new_root = tree->left;
	tree->left = new_root->right;
	new_root->right = tree;
	new_root->parent = tree->parent;

	if (tree->left)
		tree->left->parent = tree;

	if (tree->parent)
	{
		if (tree->parent->right == tree)
			tree->parent->right = new_root;
		else
			tree->parent->left = new_root;
	}
	tree->parent = new_root;

	return (new_root);
}

