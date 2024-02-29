#include "binary_trees.h"

/**
 * binary_tree_is_full - check for a full binary tree
 * @tree: pointer to a tree node
 * Return: an integer
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		int is_left_full = binary_tree_is_full(tree->left);
		int is_right_full = binary_tree_is_full(tree->right);

		return (is_left_full && is_right_full);
	}
	return (0);
}
