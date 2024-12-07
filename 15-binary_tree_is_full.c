#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * A full binary tree is one where every node has 0 or 2 children
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        /* NULL tree is not full */
        if (tree == NULL)
                return (0);

        /* Leaf node is considered full */
        if (tree->left == NULL && tree->right == NULL)
                return (1);

        /* Node must have both children to be full */
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left) &&
                        binary_tree_is_full(tree->right));

        /* Node with only one child is not full */
        return (0);
}
