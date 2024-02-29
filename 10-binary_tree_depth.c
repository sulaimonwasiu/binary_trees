#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a binary tree
 * @tree: pointer to the tree
 * Return: an integer (depth)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
