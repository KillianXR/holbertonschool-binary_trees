#include "binary_trees.h"
/**
	* binary_tree_is_full - checks if a binary tree is full
	* @tree: pointer to the root of the tree
	* Return: 1 if tree is full or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	else
	return (0);
}
