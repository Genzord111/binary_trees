#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures height and calculates balance factor
 * @tree: pointer to the root node of the tree
 * @balance: pointer to store the balance factor
 * Return: height of the tree
 */
size_t binary_tree_height_balance(const binary_tree_t *tree, int *balance)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		*balance = 0;
		return (0);
	}

	left_height = tree->left ?\
		      binary_tree_height_balance(tree->left, balance) + 1 : 0;
	right_height = tree->right ?\
		       binary_tree_height_balance(tree->right, balance) + 1 : 0;

	*balance = left_height - right_height;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	binary_tree_height_balance(tree, &balance);

	return (balance);
}
