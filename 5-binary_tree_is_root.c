#include "binary_trees.h"

/**
 * binary_tree_is_root - It checks if a node is a root of a binary tree
 * @node: This is a ptr to the node to check
 * Return: If the node is a root it returns 1, otherwise, 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
