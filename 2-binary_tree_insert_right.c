#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent)
	{
		if (!parent->right)
		{
			new_node->n = value;
			new_node->left = NULL;
			new_node->right = NULL;
			parent->right = new_node;
			return (new_node);
		}
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = parent->right;
		parent->right = new_node;
		return (new_node);
	}
	return (NULL);
}
