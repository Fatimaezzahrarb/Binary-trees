#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if node is a leaf, that does mean that the node
 * does not have any child either left nor right
 * @node: node to study.
 * Return: 1 if it is leaf or 0 if it is not at all.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
