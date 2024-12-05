#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left -  inserts a node as the left-child of another node
* @parent: pointer to node to insert the left-child in
* @value: value to store in the new node
* Return: Pointer to created node or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *next_left_node;

	if (parent == NULL)
		return (NULL);

	next_left_node = parent->left;
	parent->left = binary_tree_node(parent, value);

	if (next_left_node != NULL)
		next_left_node->parent = parent->left;

	parent->left->left = next_left_node;
	return (parent->left);
}
