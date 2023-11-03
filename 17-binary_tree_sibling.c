#include "binary_trees.h"

/**
 * binary_tree_sibling - It finds the sibling of a node in a binary tree
 * @node: This is the ptr to the node
 * Return: If node NULL/sibling is absent -NULL,otherwise, a ptr to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
