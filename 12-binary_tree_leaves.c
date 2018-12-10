#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_leaves- counts the leaves in the tree
 *@tree: the root of the tree
 *Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (count + 1);
	}
	if (tree->left != NULL)
	{
		count += binary_tree_leaves(tree->left);
	}
	if (tree->right)
	{
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
