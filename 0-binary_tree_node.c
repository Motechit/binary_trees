#include "binary_trees.h"

/**
 * binary_tree_node - Fxn creates a binary tree node
 * @parent: This is a ptr to the parent of the node to create
 * @value: This is the value to put in the new node
 * Return: NULL in case of error or a ptr to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
