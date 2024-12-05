i#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* binary_tree_inorder -  function transverses a binary tree pre-orderly
* @tree: pointer to binary tree
* @func: pointer to function
* Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, &print_num);

	if (tree->n != NULL)
		(*func)(tree->n);

	binary_tree_inorder(tree->right, &print_num);
}
