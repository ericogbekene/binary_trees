#include "binary_trees.h"

/**
 * binary_tree_height - Check the height of a binary tree
 * @tree: the given tree to check
 *
 * Return: the height if the tree
 */
size_t height = 0;
size_t binary_tree_height(const binary_tree_t *tree)
{
/* strategy: check if a node has child */
/*the increament the count using recursion*/
	if (tree == NULL)
	{
		return (0);
	}
	int rgt =  binary_tree_height(tree->right);
	int lft =  binary_tree_height(tree->left);
	if (lft > rgt)
	{
		height = lft + 1;
	}
	else
	{
		height = rgt +1;
	}
	return (height);
}
