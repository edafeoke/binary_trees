#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	node->left = NULL;
	node->parent = parent;
	node->n = value;
	if (!parent->right)
	{
		node->right = NULL;
	}
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (parent->right);
}
