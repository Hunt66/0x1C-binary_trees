<<<<<<< HEAD
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
=======
/* Uncle */

#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to a node to find the sibling
 * Return: sibling, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !(node->parent))
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);
    else if (node->parent->right == node)
        return (node->parent->left);
    return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: uncle of the node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !(node->parent) || !((node->parent)->parent))
        return (NULL);
    
    return (binary_tree_sibling(node->parent));
>>>>>>> 003e395c033418c58047422515a7bec1046aaf97
}
