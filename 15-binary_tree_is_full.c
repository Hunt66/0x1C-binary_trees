#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_is_full- checks if the binary tree is full
 *@tree: the root of the binary tree
 *Return: 1 if full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int out = 1;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left != NULL)
		return(0);
	if (tree->right != NULL && tree->left == NULL)
		return(0);
	if (tree->right && out == 1)
		out = binary_tree_is_full(tree->right);
	if (tree->left && out == 1)
		out = binary_tree_is_full(tree->left);
	return (out);
}
