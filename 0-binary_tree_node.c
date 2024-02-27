#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: parent or root node
 * @value: data in the node
 *
 * Return: pointer to a tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
