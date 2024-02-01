#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 * @tree: the given tree
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
/* strategy: Post order traversal and calling thr free function */
/*Post order : visiting the left subtree, right subtree and checking the node*/
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
