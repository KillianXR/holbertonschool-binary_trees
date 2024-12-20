#include "binary_trees.h"
/**
	* binary_tree_is_root - checks if a given node is a root
	* @node: node to check
	* Return: 1 if the node is a root or 0 if is not or if is null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	return (0);

	else
	return (1);
}
