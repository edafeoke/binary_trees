#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c = 0;
	size_t l = 0;
	size_t r = 0;

	if (tree)
	{
		if (tree->right || tree->left)
			c = c + 1;
		if (tree->left)
			l += binary_tree_height(tree->left);
		if (tree->right)
			r += binary_tree_height(tree->right);
	}
	if (l > r)
		c += l;
	else
		c += r;
	return (c);
}
