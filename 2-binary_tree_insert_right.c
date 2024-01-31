#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that inserts a node as
 				the right-child of another node
 * Description:function that inserts a node as the right-child
 				of another node If parent already has a right-child,
				the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 * @perant:a pointer to the node
 * @value:is a data in the node
 * Return:NULL or pointer 
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
