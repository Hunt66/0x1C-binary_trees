#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_nodes- counts the nodes with at least one child in tree
 *@tree: the root of the tree
 *Return: the count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		count += binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		count += binary_tree_nodes(tree->right);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (count + 1);
	}
	return (count);
}
