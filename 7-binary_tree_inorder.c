#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_inorder- goes through a binary tree using in-order traversal
 *@tree: the root of tree
 *@func: the function done on node
 *Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, func);
	}
	func(tree->n);

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, func);
	}

}
