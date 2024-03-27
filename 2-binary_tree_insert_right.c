#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_insert_right - updates parent node
 * @parent: the parent of new child
 * @value: value of the new child
 *
 * Return: pointer to the created node, or NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		child->right = parent->right;
		child->right->parent = child;
	}
	parent->right = child;
	return (child);
}
