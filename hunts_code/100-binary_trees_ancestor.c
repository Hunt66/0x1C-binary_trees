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


/**
 *binary_trees_ancestor: finds the lowest common ancestor
 *@first: the first node
 *@second: the second node
 *Return: the ancester node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t height_1, height_2, i;
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);
	height_1 = binary_tree_depth(first);
	height_2 = binary_tree_depth(second);
	if (height_1 > height_2)
		for (i = 0; i < height_1 - height_2; i++)
			first = first->parent;
	else
		for (i = 0; i < height_2 - height_1; i++)
			second = second->parent;
	if (second == first)
	{
		if (first->left)
			first = first->left;
		else
			first = first->right;
		temp = first ->parent;
		return (temp);
	}
	while (1)
	{
		if (second->parent == NULL || first->parent == NULL)
			return (NULL);
		if (second->parent == first->parent)
		{
			temp = second->parent;
			return (temp);
		}
		second = second->parent;
		first = first->parent;
	}
	return (NULL);
}
