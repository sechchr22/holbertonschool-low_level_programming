#include "binary_trees.h"
/**
 * binary_tree_insert_right - to insert node as right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = binary_tree_node(parent, value);

        if (parent == NULL)
        return NULL;

        if (parent->right != NULL)
        {
		new_right_node->right = parent->right;
                parent->right->parent = new_right_node;
                parent->right = new_right_node;
                return new_right_node;
        }

        else
        {
                parent->right = new_right_node;
                return new_right_node;
        }
}	
