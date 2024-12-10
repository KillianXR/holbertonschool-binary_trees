#include "binary_trees.h"
/**
	* binary_tree_height - give the height of a binary tree
	* @tree: pointer to the root node
	* Return: the height of the tree, or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftside = 0, rightside = 0;

	if (tree == NULL)
	return (0);

	leftside = binary_tree_height(tree->left);
	rightside = binary_tree_height(tree->right);

	if (leftside > rightside)
	return (leftside + 1);

	else
	return (rightside + 1);
}
