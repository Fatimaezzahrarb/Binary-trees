#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specify node from root
 * @tree: node to check depth
 * Return: 0 is it is root or number of the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
