#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_insert_left- inserts a node as the left child of another one
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to be put in node
 *Return: pointer to new node or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	temp = parent->left;
	parent->left = new;
	new->parent = parent;
	new->left = temp;
	if (temp != NULL)
		temp->parent = new;
	new->n = value;
	new->right = NULL;
	return (new);
}
