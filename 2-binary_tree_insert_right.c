#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;
newnode = malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->n = value;
newnode->parent = parent;
if (parent == NULL)
return (NULL);
if (parent->right != NULL)
{
newnode->right = parent->right;
parent->right->parent = newnode;
}
parent->right = newnode;
return (newnode);
}
