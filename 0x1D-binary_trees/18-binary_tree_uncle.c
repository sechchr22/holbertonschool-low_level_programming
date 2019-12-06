#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *gpa = NULL;
	binary_tree_t *uncle = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (parent->parent)
	{
		gpa = parent->parent;
		if (gpa->left && gpa->right)
		{
			if (gpa->left == parent)
				return (uncle = gpa->right);
			else
				return (uncle = gpa->left);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
