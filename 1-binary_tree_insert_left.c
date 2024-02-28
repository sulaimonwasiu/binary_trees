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

	binary_tree_t *new = binary_tree_node(parent, value);

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
