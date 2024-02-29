#include "binary_trees.h"

/**
 * binary_tree_size - get the size of a tree given a node
 * @tree: pointer to a node in a tree
 *
 * Return: an integer(size of the tree)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}
