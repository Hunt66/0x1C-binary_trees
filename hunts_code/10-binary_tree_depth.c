#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_depth- measures the depth of a node in a binary tree
 *@tree: the node of tree to be measured
 *Return: void
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	while (1)
	{
		if (tree->parent == NULL)
			break;
		count += 1;
		tree = tree->parent;
	}
	return (count);
}
