#include "binary_trees.h"

/**
 * binary_tree_node - creates a node of a binary tree
 * @parent: parent to the node
 * @value: of data in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (value)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	return (NULL);
}