#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_balance- measures the balance factor of the tree
 *@tree: the tree root
 *Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
		if (tree->left != NULL)
	{
		left = (binary_tree_balance(tree->left) + 1);
	}
	if (tree->right != NULL)
	{
		right = (binary_tree_balance(tree->right) + 1);
	}
	return (left - right);
}
