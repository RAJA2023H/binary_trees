#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *Temp;

	if (tree != NULL)
	{
		Temp = malloc(sizeof(binary_tree_t));
		if (Temp != NULL)
		{
			Temp = tree;
			if (Temp->left != NULL)
			{
				Temp = Temp->left;
				binary_tree_delete(Temp->left);
				free(Temp->left);
			}
			if (Temp->right != NULL)
			{
				Temp = Temp->right;
				binary_tree_delete(Temp->right);
				free(Temp->right);
			}
		}
		free(Temp);
	}
	free(tree);
}
