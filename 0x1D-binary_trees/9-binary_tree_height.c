#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree root node
 * Return: height value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree = 0;
	size_t right_tree = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	if (left_tree > right_tree)
		return (left_tree + 1);
	else
		return (right_tree + 1);
}
