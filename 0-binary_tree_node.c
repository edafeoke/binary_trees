#include "binary_trees.h"

/**
 * binary_tree_node -  creates a binary tree node
 *
 * @parent: a pointer to paren node
 * @value: value of he new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->right = NULL;
	node->left = NULL;
	node->n = value;
	node->parent = parent;
	return (node);
}
