#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_node;

	if (parent == NULL)
		return (NULL);

	l_node = binary_tree_node(parent, value);
	if (l_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		l_node->left = parent->left;
		parent->left->parent = l_node;
	}
	parent->left = l_node;

	return (l_node);
}
