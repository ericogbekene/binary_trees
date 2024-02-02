#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leave of a binary tree
 * @tree: the given tree to count
 *
 * Return: the size if the tree leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
/* strategy: check if a node has child */
/*the increament the count using recursion*/

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
