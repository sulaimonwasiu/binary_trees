#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a tree node
 * @node: pointer to the node
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
