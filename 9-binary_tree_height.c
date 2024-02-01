#include "binary_trees.h"

/**
 * binary_tree_height - Check the height of a binary tree
 * @tree: the given tree to check
 *
 * Return: the height if the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
/* strategy: check if a node has child */
/*the increament the count using recursion*/
	size_t rgt, lft;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
	{
		rgt =  1 + binary_tree_height(tree->right);
	}
	else
	{
		rgt = 0;
	}
	if (tree->left)
	{
		lft = 1 + binary_tree_height(tree->left);
	}
	else
	{
		lft = 0;
	}
	return ((lft > rgt) ? lft : rgt);
}
