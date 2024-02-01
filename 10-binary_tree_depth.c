#include "binary_trees.h"

/**
 * binary_tree_depth - Check the height of a binary tree
 * @tree: the given tree to check
 *
 * Return: the depth if the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
/* strategy: check if a node has child */
/*the increament the count using recursion*/

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
	{
		return (1 + binary_tree_depth(tree->right));
	}
	else if (tree->left)
	{
		return(1 + binary_tree_depth(tree->left));
	}
	return (0);
}
