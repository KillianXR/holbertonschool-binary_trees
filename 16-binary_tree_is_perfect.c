#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root of the binary tree.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth = 0;
int level = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (depth == level + 1);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
