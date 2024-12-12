#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, or 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth = 0;
int level = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL) 
return (depth == level + 1);
if (binary_tree_is_perfect (tree->left == NULL || tree->right == NULL))
return (0);

return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}


