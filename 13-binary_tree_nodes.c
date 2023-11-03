#include "binary_trees.h"

/**
 * binary_tree_nodes - It counts the node wth at least 1 child in a binary tree
 * @tree: T'is the ptr to the root node of the tree to count the num of nodes
 * Return: If tree is NULL, the fxn returns 0, otherwise, the node count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
