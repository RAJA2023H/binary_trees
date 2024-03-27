#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (size);
}
