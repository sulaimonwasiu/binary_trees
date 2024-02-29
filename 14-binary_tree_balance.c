#include "binary_trees.h"

/**
 * binary_tree_balance - get the balance factor of a tree
 * @tree: pointer to the node tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
