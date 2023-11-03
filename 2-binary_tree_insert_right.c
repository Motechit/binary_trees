#include "binary_trees.h"

/**
 * binary_tree_insert_right - It inserts a node as the right-child
 * of another in a binary tree
 * @parent: This is a ptr to the node to insert the right-child in
 * @value: This is the value to store in the new node
 * Return: NULL - incase of error, otherwise, a ptr to the new node
 * Description: If parent has a right-child, the new node takes its place
 * and the old right-child is set as the right-child of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
