#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left child to another node
 * @parent: pointer to the node to insert left child
 * @value: to insert into new node
 *
 * Return: pointer to new node or NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	my_node = malloc(sizeof(binary_tree_t));
	if (my_node == NULL)
	{
		return (NULL);
	}

	if (value || parent != NULL)
	{
		my_node->n = value;
		/*my_node->parent = parent;*/
		my_node->left = NULL;
		my_node->right = NULL;
		if (parent->left == NULL)
		{
			parent->left = my_node;
			return (my_node);
		}
		else
		{
			my_node->left = parent->left;
			parent->left = my_node;
			return (my_node);
		}
	}
	return (NULL);
}
