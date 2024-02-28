#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at the left side
 * @parent: parent node
 * @value: value of the node to insert
 *
 * Return: pointer to a binary tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = NULL;
	new->right = NULL;
	new->left = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
		new->parent = parent;
	}

	parent->left = new;
	new->parent = parent;
	return (new);
}
