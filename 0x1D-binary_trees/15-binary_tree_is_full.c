#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root of the tree
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		count_left = binary_tree_leaves(tree->left);
		count_right = binary_tree_leaves(tree->right);
	}
	return (count_left + count_right);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	counter += binary_tree_nodes(tree->right);
	counter += binary_tree_nodes(tree->left);

	if (!tree->right && !tree->left)
		return (counter);

	return (counter + 1);
}
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root of the binary tree
 * Return: 1 if it is 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

	int leaves, inner_nodes;

	if (tree == NULL)
	return (0);

	leaves = binary_tree_leaves(tree);
	inner_nodes = binary_tree_nodes(tree);

	if (leaves == (inner_nodes + 1))
	return (1);

	else
	return (0);
}

