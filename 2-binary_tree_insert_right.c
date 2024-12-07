#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right -  inserts a node as the right-child of another node
* @parent: pointer to node to insert the right-child in
* @value: value to store in the new node
* Return: Pointer to created node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *next_right_node;

	if (parent == NULL)
		return (NULL);

	next_right_node = parent->right;
	parent->right = binary_tree_node(parent, value);

	if (parent->right == NULL)
		return (NULL);

	if (next_right_node != NULL)
		next_right_node->parent = parent->right;

	parent->right->right = next_right_node;

	return (parent->right);
}
