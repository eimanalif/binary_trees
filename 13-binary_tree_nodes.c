#include "binary_trees.h"

/**
 *binary_tree_nodes - function that counts the nodes with at least 1 child in a binary tree
 *Description:function that counts the nodes with at least 1 child in a binary tree
 *@tree: apointer to root
 *Return:0 or size of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		node += (tree->left || tree->right) ? 1 : 0;
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
	}
	return (node);
}
