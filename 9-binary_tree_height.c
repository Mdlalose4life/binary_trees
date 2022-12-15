#include "binary_trees.h"
 /**
 * binary_tree_height - Goes through binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
	size_t left = 0, right = 0;
	left = tree->left ? 1 + binary_tree_height(tree->left):0;
	right = tree->right ? 1 + binary_tree_height(tree->right):0;
	return ((1 > right) ? 1 :right);
}
return (0);
}
