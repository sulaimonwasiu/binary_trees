#include "binary_trees.h"

/**
 * binary_tree_balance - get the balance factor of a tree
 * @tree: pointer to the node tree
 * Return: an integer balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = custom_tree_height(tree->left);
	right_height = custom_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * custom_tree_height - height of a tree
 * @tree: pointer to the tree node
 * Return: an integer(height)
 */
int custom_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = custom_tree_height(tree->left);
	right_height = custom_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
