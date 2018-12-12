#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_size- measures the size of the binary tree
 *@tree: the root of the tree
 *Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		count = binary_tree_size(tree->left) + count;
	if (tree->right != NULL)
		count = binary_tree_size(tree->right) + count;
	return (count);
}
