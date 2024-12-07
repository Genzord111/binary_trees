#include "binary_trees.h"

/**
 * is_perfect_recursive - Recursively checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * @depth: Current depth of the tree
 *
 * Return: Depth of the tree if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth)
{
    // If tree is NULL, return depth 0
    if (!tree)
        return (depth);

    // If it's a leaf node
    if (!tree->left && !tree->right)
        return (depth);

    // If node has only one child, it's not perfect
    if (!tree->left || !tree->right)
        return (0);

    // Recursively check left and right subtrees
    int left_depth = is_perfect_recursive(tree->left, depth + 1);
    int right_depth = is_perfect_recursive(tree->right, depth + 1);

    // Check if both subtrees have the same depth and are perfect
    return ((left_depth == right_depth && left_depth != 0) ? left_depth : 0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    // If tree is NULL, return 0
    if (!tree)
        return (0);

    // Call recursive helper starting from depth 0
    return (is_perfect_recursive(tree, 0) != 0);
}
