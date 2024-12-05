#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* binary_tree_preorder -  function transverses a binary tree using pre-orderly
* @tree: pointer to binary tree
* @func: pointer to function
* Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->n != NULL)
		(*func)(tree->n);

	binary_tree_preorder(tree->left, &print_num);
	binary_tree_preorder(tree->right, &print_num);
}
