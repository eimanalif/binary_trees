#include "binary_trees.h"


/**
 *binary_tree_insert_right - function that inserts a node as the right-child of another node
 *Description:function that inserts a node as the right-child of another node
 *@perant:is the root node
 *@value:is a data in the node
 *Return:binary tree
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->perent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}