#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandparent;
if (!node || !node->parent)
return (NULL);
grandparent = node->parent->parent;
if (!grandparent)
return (NULL);
if (grandparent->left == node->parent)
return (grandparent->right);
if (grandparent->right == node->parent)
return (grandparent->left);
return (NULL);
}
