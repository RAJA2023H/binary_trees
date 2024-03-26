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
	binary_tree_t *child = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if ((child == NULL) || (parent == NULL))
		return (NULL);
	child = binary_tree_node(parent, value);
	
	temp = parent->left;
	if (parent->left != NULL)
	{
		child->left = temp;
		child->left->parent = child;
	}
	parent->left = child;
	child->parent = parent;

	return (child);
}
