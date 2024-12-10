#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL)
{
left = 1 + binary_tree_height(tree->left);
}
if (tree->right != NULL)
{
right = 1 + binary_tree_height(tree->right);
}
if (left > right)
{
return (left);
}
else
{
return (right);
}
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_balance(tree->left);
right_height = binary_tree_balance(tree->right);
return (left_height - right_height);
}
