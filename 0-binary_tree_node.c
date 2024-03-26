#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_node - function that creates a binary tree node
 * @parent : parent of the node
 * @value : value of the node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *N = malloc(sizeof(binary_tree_t));

	if (N == NULL)
		return (NULL);
	N->n = value;
	N->parent = parent;
	N->left = NULL;
	N->right = NULL;
	return (N);
}
