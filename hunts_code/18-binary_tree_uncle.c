#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_uncle- finds the uncle of the node
 *@node: the node we find uncle of
 *Return: that node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
       	binary_tree_t *temp;

	if (node == NULL || !node->parent || node->parent->parent == NULL)
		return (NULL);
	temp = node->parent->parent;
	if (temp->left == node->parent && temp->right)
		return (temp->right);
	else if (temp->right == node->parent && temp->left)
		return (temp->left);
	return (NULL);
}
