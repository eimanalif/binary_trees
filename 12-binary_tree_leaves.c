#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts leaves in binary tree.
 * @tree: A pointer to root node
 *
 * Return: The number of leaves in tree.
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_num = 0;

	if (tree)
	{
		leave_num += (!tree->left && !tree->right) ? 1 : 0;
		leave_num += binary_tree_leaves(tree->left);
		leave_num += binary_tree_leaves(tree->right);
	}
	return (leave_num);
}
