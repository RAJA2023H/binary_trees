#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree.
 * @tree: pointer to the root node.
 * Return: balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		left_h = 1 + binary_tree_balance(tree->left);

	if (tree->right != NULL)
		right_h = 1 + binary_tree_balance(tree->right);
	return (left_h - right_h);
}

