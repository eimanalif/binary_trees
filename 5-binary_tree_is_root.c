#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if
 *						given node is a root
 * Description: function must return 1 if node is a root, otherwise 0
 * @node: pointer to node to check
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return(1);
}