#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
* binary_tree_is_leaf -  checks if a node is a leaf node
* @node: pointer to node to be checked
* Return: 1 if node is leaf else 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
