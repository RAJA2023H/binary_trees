#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_insert_left - updates parent node
 * @parent: the parent of new child
 * @value: value of the new child
 *
 * Return: pointer to the created node, or NULL
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->parent = parent;
	child->n = value;
	child->left = parent->left;
	child->right = NULL;
	if (parent->left)
		parent->left->parent = child;
	parent->left = child;
	return (child);
}
