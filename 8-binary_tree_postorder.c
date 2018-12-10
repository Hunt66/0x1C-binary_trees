#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_postorder- goes through a binary tree using in-order traversal
 *@tree: the root of tree
 *@func: the function done on node
 *Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
