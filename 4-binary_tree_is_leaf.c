#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a given node is a leaf
 * @node: the given node to check
 *
 * Return: 1 for leaf and 0 for non leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/* strategy: icheck if the left and right child are null */
/*the return the appropriate value*/
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL &&  node->right == NULL)
	{
		return (1);
	}
	return (0);
}
