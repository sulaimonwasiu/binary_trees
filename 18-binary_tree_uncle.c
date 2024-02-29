#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a tree node
 * @node: pointer to the node
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grand_parent = node->parent->parent;

	if (node == NULL || parent == NULL)
		return (NULL);

	if (grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == NULL || grand_parent->right == NULL)
		return (NULL);

	if (grand_parent->left == parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
