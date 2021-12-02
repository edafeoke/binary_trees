#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the first node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f = malloc(sizeof(binary_tree_t));

	if (!f)
		return (NULL);
	if (!first || !second)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == second)
		return (first->parent);
	f = binary_trees_ancestor(first, second->parent);
	if (f)
		return (f);
	f = binary_trees_ancestor(first->parent, second);
	if (f)
		return (f);
	free(f);
	return (NULL);
}
