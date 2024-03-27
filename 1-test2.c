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

    // Insert 98 as the root node
    root = binary_tree_node(NULL, 98);

    // Insert 54 as the left child of the root node
    binary_tree_insert_left(root, 54);

    // Insert 6 as the left child of the left child of the root node
    binary_tree_insert_left(root->left, 6);

    // Insert 12 as the left child of the left child of the left child of the root node
    binary_tree_insert_left(root->left->left, 12);

    // Insert 402 as the right child of the root node
    binary_tree_insert_right(root, 402);

    // Insert 128 as the right child of the right child of the root node
    binary_tree_insert_right(root->right, 128);

    // Print the resulting binary tree
    binary_tree_print(root);

    return (0);
}
