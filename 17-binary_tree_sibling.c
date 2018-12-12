#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_sibling- finds the sibling of a node
 *@node: the node to find the sibling of
 *Return: pointer to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent;
	if (temp->left == node && temp->right)
		return (temp->right);
	else if (temp->right == node && temp->left)
		return (temp->left);
	return (NULL);
}
