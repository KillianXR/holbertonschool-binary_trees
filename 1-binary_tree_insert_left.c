#include "binary_trees.h"
/**
	* binary_tree_insert_left - insert a node at the left of a parent
	* @parent: the parent node
	* @value: value of the new node
	* Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
	return (NULL);
	}

	if (parent->left != 0)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;
	return (new);
}
