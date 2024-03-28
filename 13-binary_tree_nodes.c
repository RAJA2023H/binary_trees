#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child
 * @tree: pointer to the root node of the binary tree
 *
 * Return: node count, otherwise 0,
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t C = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		C = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (C);
}
