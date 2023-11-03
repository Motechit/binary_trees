#include "binary_trees.h"

/**
 * binary_tree_insert_left - It inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: This is a ptr to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: NULL incase of error, otherwise, a ptr to the new node
 * Description: If parent already has a left-child, new node
 * takes its place and the old left-child is set as the left-child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
