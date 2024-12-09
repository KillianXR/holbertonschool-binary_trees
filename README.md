```markdown
# C - Binary Trees

## Resources
Read or watch the following resources to deepen your understanding of binary trees:

- [Binary tree (Wikipedia)](https://en.wikipedia.org/wiki/Binary_tree) *(note the first line: Not to be confused with B-tree.)*
- [Data Structure and Algorithms - Tree](https://www.geeksforgeeks.org/introduction-to-tree-data-structure/)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
- [Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)
- [Data structures: Binary Tree](https://www.programiz.com/dsa/binary-tree)

---

## Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- What is a binary tree?
- What is the difference between a binary tree and a Binary Search Tree?
- What is the possible gain in terms of time complexity compared to linked lists?
- What are the depth, the height, and the size of a binary tree?
- What are the different traversal methods to go through a binary tree?
- What is a complete, full, perfect, and balanced binary tree?

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project, is **mandatory**.
- Your code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- No more than **5 functions per file**.
- You are allowed to use the standard library.
- Do not push your test files (`main.c`), as they will not be taken into account during correction.
- Prototypes of all your functions should be included in a header file called `binary_trees.h`.
- All header files should be include guarded.

### GitHub
- There should be **one project repository** per group.
- If you clone, fork, or copy a project repository with the same name before the second deadline, you risk a **0% score**.

---

## Data Structures
Use the following data structures and types for binary trees. Include them in your header file:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t; /* Binary Search Tree */
typedef struct binary_tree_s avl_t; /* AVL Tree */
typedef struct binary_tree_s heap_t; /* Max Binary Heap */
```

### Note
For tasks **0 to 23 (inclusive)**, deal only with **simple binary trees**. These trees are **not BSTs** and do not follow any specific rules.

---

## Tasks Overview

### 0. New node
Write a function that creates a binary tree node.

### 1. Insert left
Write a function that inserts a node as the left-child of another node.

### 2. Insert right
Write a function that inserts a node as the right-child of another node.

### 3. Delete
Write a function that deletes an entire binary tree.

### 4. Is leaf
Write a function that checks if a node is a leaf.

### 5. Is root
Write a function that checks if a given node is a root.

### 6. Pre-order traversal
Write a function that goes through a binary tree using **pre-order traversal**.

### 7. In-order traversal
Write a function that goes through a binary tree using **in-order traversal**.

### 8. Post-order traversal
Write a function that goes through a binary tree using **post-order traversal**.

### 9. Height
Write a function that measures the height of a binary tree.

### 10. Depth
Write a function that measures the depth of a node in a binary tree.

### 11. Size
Write a function that measures the size of a binary tree.

### 12. Leaves
Write a function that counts the leaves in a binary tree.

### 13. Nodes
Write a function that counts the nodes with at least one child in a binary tree.

### 14. Balance factor
Write a function that measures the balance factor of a binary tree.

### 15. Is full
Write a function that checks if a binary tree is full.

### 16. Is perfect
Write a function that checks if a binary tree is perfect.

### 17. Sibling
Write a function that finds the sibling of a node.

### 18. Uncle
Write a function that finds the uncle of a node.

---

## Print Function
A helper function for visualization is provided. This function should not be pushed to your repository and may not be used during the correction process.

---

## Repository
- **GitHub repository**: [holbertonschool-binary_trees](https://github.com/holbertonschool-binary_trees)
```
