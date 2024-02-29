#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: a tree node
 * Return: an integer(number of nodes)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, current_node;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	current_node = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	return (current_node + left_nodes + right_nodes);
}
