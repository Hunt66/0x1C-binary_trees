#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_height- measures the height of a binary tree
 *@tree: the root of tree to be measured
 *Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left = (binary_tree_height(tree->left) + 1);
	}
	if (tree->right != NULL)
	{
		right = (binary_tree_height(tree->right) + 1);
	}
	if (left >= right)
		return (left);
	else
		return (right);
}
