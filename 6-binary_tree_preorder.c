#include "binary_trees.h"

/**
 * binary_tree_preorder - It goes through a binary tree using pre-order traversal
 * @tree: Its the ptr to the root node of the tree to traverse
 * @func: Its the ptr to a fxn to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
