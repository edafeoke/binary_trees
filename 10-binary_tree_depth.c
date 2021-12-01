#include "binary_trees.h"

/**
 * binary_tree_depth - measures the dept of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
