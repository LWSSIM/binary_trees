# Binary Trees in C

## What is a Binary Tree?

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. These children are themselves the root of a binary tree. The structure resembles an inverted tree, with the topmost node as the root.

```c
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
```

## Difference between Binary Tree and Binary Search Tree (BST)

A Binary Search Tree is a specific type of binary tree where the left child of a node contains only elements less than the node, and the right child contains elements greater than the node. This ordering property makes searching for elements more efficient.

```c
struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};
```

## Gain in Time Complexity Compared to Linked Lists

Binary trees provide faster search, insert, and delete operations compared to linked lists, especially for sorted data. In a binary search tree, the time complexity for these operations is O(log n) on average, while linked lists have O(n) time complexity. This is due to the hierarchical nature of binary trees, which allows for quicker elimination of subtrees during search operations.

## Depth, Height, and Size of a Binary Tree

- **Depth:** The depth of a node is the number of edges on the path from the root to that node.

```c
int depth(struct Node* node) {
    if (node == NULL) return -1; // No depth for NULL nodes
    int leftDepth = depth(node->left);
    int rightDepth = depth(node->right);
    return 1 + (leftDepth > rightDepth ? leftDepth : rightDepth);
}
```

- **Height:** The height of a node is the number of edges on the longest path from that node to a leaf.

```c
int height(struct Node* node) {
    if (node == NULL) return 0; // Height of NULL nodes is 0
    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
```

- **Size:** The size of a binary tree is the total number of nodes in the tree.

```c
int size(struct Node* node) {
    if (node == NULL) return 0; // Size of NULL nodes is 0
    return 1 + size(node->left) + size(node->right);
}
```

## Traversal Methods for Binary Trees

- **In-order Traversal:** Left, Root, Right

```c
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
```

- **Pre-order Traversal:** Root, Left, Right

```c
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
```

- **Post-order Traversal:** Left, Right, Root

```c
void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}
```

## Types of Binary Trees

- **Complete Binary Tree:** A binary tree in which all levels are completely filled, except possibly the last level, which is filled from left to right.

- **Full Binary Tree:** A binary tree in which every node has either 0 or 2 children, but never 1.

- **Perfect Binary Tree:** A binary tree that is both full and complete, meaning all levels are completely filled.

- **Balanced Binary Tree:** A binary tree is balanced if the height of the left and right subtrees of any node differ by at most one. Balancing helps in maintaining efficient search operations.

These concepts are fundamental to understanding binary trees in C and can serve as a strong foundation for more advanced data structure discussions.