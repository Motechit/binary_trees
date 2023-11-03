#include "binary_trees.h"

/**
 * binary_tree_depth - It measures the depth of a node in a binary tree
 * @tree: T'is the ptr to the node to measure the depth
 * Return: If tree is NULL,the fxn returns 0, otherwise, depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
