#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - deletes an entire BT
* @tree: ptr->root_node
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

