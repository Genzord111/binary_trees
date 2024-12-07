#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree (iterative)
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: number of nodes in the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *queue[10000];
	int front = 0;
	int rear = 0;

	if (tree == NULL)
		return (0);

	queue[rear++] = tree;

	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		size++;

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}

	return (size);
}
