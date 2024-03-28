#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root.
 * 
 * Return: leaves count, otherwise 0,
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t C = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		C = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	if (!tree->left || !tree->right)
		C = 1;
	return (C);
}
