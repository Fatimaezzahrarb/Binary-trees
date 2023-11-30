#include "binary_trees.h"
/**
 * binary_tree_insert_left - add node in left of the parent
 * if it exist then move down one level and add new node first
 * @parent: parent of specife node
 * @value: value of node
 * Return: NULL if it fail or a new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
