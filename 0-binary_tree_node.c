#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_node- creates a binary tree
 *@parent: the node of the binary tree to create
 *@value: int value to put into the new node
 *Return: pointer to new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
