#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root of a tree
 * @node: pointer to node to check
 *
 * Return: 1 if it is root otherwise return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL && (node->left || node->right))
			return (1);
		return (0);
	}
	return (0);
}
