#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;
/* Binary search tree */
typedef struct binary_tree_s bst_t;
/* AVL tree */
typedef struct binary_tree_s avl_t;
/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/*-----Functions-----*/
/* visual rep for a BT */
void binary_tree_print(const binary_tree_t *);

/*-----mandatory-----*/
/* Creates a BT node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert node left-child */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert node right-child */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* delete tree */
void binary_tree_delete(binary_tree_t *tree);

/* is node leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* is node root */
int binary_tree_is_root(const binary_tree_t *node);

/* Pre-Orded traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* In-Order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Post-Order */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Height of a tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Depth of a tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Size of a tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Leaves count of a Btree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* node(1+ child) count of a Btree */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Balance Factor of a Btree */
int binary_tree_balance(const binary_tree_t *tree);

/* Is BT Full */
int binary_tree_is_full(const binary_tree_t *tree);

/* Is BT Perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* finds sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* finds uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/*-----advanced-----*/
/* finds L.C.Ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second);

/* Level_Order Traversal */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Is BT complete */
int binary_tree_is_complete(const binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */

