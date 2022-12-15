#include "binary_trees.h"
/**
 * count - Function that counts the size of a binary node.
 * @node: Node of the binary tree to count.
 * @s: Size of the tree.
 * Return: None
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree)
{
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
}
return (size);
}
