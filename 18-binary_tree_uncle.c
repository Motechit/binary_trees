#include "binary_trees.h"

/**
 * binary_tree_uncle - It finds the uncle of a node in a binary tree
 * @node: This is the ptr to the node to find
 * Return: If node is NULL/no uncle - NULL, otherwise, a ptr to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
