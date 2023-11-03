#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - It checks if a node is a leaf of a binary tree
 * @node: This is the ptr to the node
 * Return: If the node is a leaf - 1, otherwise, 0
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Fxn returns the depth of a given node in a binary tree
 * @tree: This is the ptr to the node to measure
 * Return: It returns the depth of the node
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Fxn returns a leaf of a binary tree
 * @tree: This is the ptr to the root node of the tree
 * Return: It returns the ptr to the 1st encountered leaf
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - It checks if a binary tree is perfect recursively
 * @tree: This is the ptr to the root node of the tree to check
 * @leaf_depth: This is the depth of one leaf in the binary tree
 * @level: This is the level of current node
 * Return: If the tree is perfect - 1, otherwise 0
 */

int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Fxn checks if a binary tree is perfect
 * @tree: This is the ptr to the root node of the tree
 * Return: If tree is NULL or not perfect - 0, otherwise, 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
