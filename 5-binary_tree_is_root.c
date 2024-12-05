#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* binary_tree_is_root -  checks if a node is a root node
* @node: pointer to node to be checked
* Return: 1 if node is root else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

return (0);
}
