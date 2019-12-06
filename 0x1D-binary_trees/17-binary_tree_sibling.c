#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (parent->left && parent->right)
	{
		if (parent->left == node)
		{
			sibling = parent->right;
			return (sibling);
		}
		else
		{
			sibling = parent->left;
			return (sibling);
		}
	}
	else
		return (NULL);
}
