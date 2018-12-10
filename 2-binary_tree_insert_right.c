#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_insert_right- inserts a node as the right child of another one
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to be put in node
 *Return: pointer to new node or NULL if fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	temp = parent->right;
	parent->right = new;
	new->parent = parent;
	new->right = temp;
	if (temp != NULL)
		temp->parent = new;
	new->n = value;
	new->left = NULL;
	return (new);
}
