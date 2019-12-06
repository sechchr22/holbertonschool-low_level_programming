#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int size = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	if ((_pow_recursion(2, (height + 1)) - 1) == size)
		return (1);
	else
		return (0);
}

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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return ((size_left + size_right) + 1);
}

/**
 * _pow_recursion - power of
 * @base: base
 * @exp: exponent
 * Return: integer
 */
int _pow_recursion(int base, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp < 1)
		return (1);
	return (base * _pow_recursion(base, exp - 1));
}
