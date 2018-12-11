#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_is_perfect- checks if the binary tree is perfect or not
 *@tree: the root of the tree
 *Return: 1 if perfect 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	int out = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = perfect_help(tree);
	if (tree->right)
		right = binary_tree_is_perfect(tree->right) + 1;
	if (left != right)
		out = 0;
	return (out);
}

size_t perfect_help(const binary_tree_t *tree)
	
