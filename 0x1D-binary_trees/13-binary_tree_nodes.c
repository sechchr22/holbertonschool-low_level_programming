#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	return (0);

	right = binary_tree_nodes(tree->right);
	left = binary_tree_nodes(tree->left);

	if (tree->parent == NULL)
	return (right + left + 1);

	if (tree->left != NULL)
	return (left + 1);

	if (tree->right != NULL)
	return (right + 1);

	return (0);
}
