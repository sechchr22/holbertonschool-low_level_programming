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

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 or an integer
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
	return (0);

	if (tree->left != NULL)
	{
		height_left = binary_tree_height(tree->left);
		height_left += 1;
	}

	if (tree->right != NULL)
	{
		height_right = binary_tree_height(tree->right);
		height_right += 1;
	}

	balance_factor = height_left - height_right;

	return (balance_factor);
}
