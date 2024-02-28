#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the right side
 * @parent: parent node
 * @value: value of the node to insert
 *
 * Return: pointer to a binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = binary_tree_node(parent, value);

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
