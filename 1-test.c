#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    /* Create the root node with value 98 */
    root = binary_tree_node(NULL, 98);
    if (root == NULL) {
        fprintf(stderr, "Failed to create root node\n");
        return (1);
    }

    /* Create the left and right child nodes with values 12 and 402, respectively */
    root->left = binary_tree_node(root, 12);
    if (root->left == NULL) {
        fprintf(stderr, "Failed to create left child node\n");
        return (1);
    }

    root->right = binary_tree_node(root, 402);
    if (root->right == NULL) {
        fprintf(stderr, "Failed to create right child node\n");
        return (1);
    }

    /* Print the initial binary tree */
    printf("Initial binary tree:\n");
    binary_tree_print(root);
    printf("\n");

    /* Insert a node with value 128 as the left child of the right child of the root */
    binary_tree_insert_left(root->right, 128);

    /* Insert a node with value 54 as the left child of the root */
    binary_tree_insert_left(root, 54);

    /* Print the modified binary tree */
    printf("Modified binary tree:\n");
    binary_tree_print(root);

    return (0);
}
