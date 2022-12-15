#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node to the left.
 * @parent: pointer to the node that inserts the right-child in.
 * @value: value to store in the new node.
 * Return: Pointer to a new node. return NULL if no parent 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node = NULL;

	if (parent == NULL)
		return (NULL);
	r_node = malloc(sizeof(binary_tree_t));
	if (r_node == NULL)
		return (NULL);
	r_node->n = value;
	r_node->parent = parent;
	r_node->left = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = r_node;
		r_node->right = parent->right;
	}
	else
	{
		parent->right = r_node;
		r_node->right = NULL;
	}
	parent->right = r_node;
	return (r_node);
}
