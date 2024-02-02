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
	size_t rgt, lft;

	if (tree == NULL)
	{
		return (0);
	}
	rgt = binary_tree_depth(tree->right);
	lft = binary_tree_depth(tree->left);
	return (((lft > rgt) ? lft : rgt) + 1);
}
