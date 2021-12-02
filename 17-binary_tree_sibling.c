#include "binary_trees.h"

/**
 * binary_tree_sibling - a function to finds the sibling of a node
 * @node: pointer to node to find sibling of
 *
 * Return: pointer to sibling node, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent) ||
			node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
