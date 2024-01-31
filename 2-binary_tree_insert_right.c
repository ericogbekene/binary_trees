#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*new_node = malloc(sizeof(binary_tree_t));*/
	if (parent == NULL)
	{
		return (NULL);
	}
		if (!value)
		{
			return (NULL);
		}
		/* Since it is right, that mean parent already exist so we call task 0 */
		new_node = binary_tree_node(parent, value);
		if (new_node == NULL)
		{
			return (NULL);
			/* it faile at task 0 to create */
		}
		if (parent->right == NULL )
		{ 		
			parent->right = new_node;
			new_node->parent = parent;
		}
		else
		{
			new_node->right = parent->right;
			parent->right->parent = new_node;
			parent->right = new_node;
			
		}	
		return (new_node);
}
