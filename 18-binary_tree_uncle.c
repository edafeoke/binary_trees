#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->right != NULL &&
			node->parent->parent->right != node->parent)
	{
		return (node->parent->parent->right);
	}
	else if (node->parent->parent->left != NULL &&
			node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
