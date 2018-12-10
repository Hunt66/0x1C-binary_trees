#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_delete- deletes an entire binary tree
 *@tree: the pointer to the root of the binary tree
 *Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);
	}
}
