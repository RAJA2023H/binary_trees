#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}
	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
