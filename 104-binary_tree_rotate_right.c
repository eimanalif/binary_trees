#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right-rotates binary tree.
 * description: right-rotates binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root node after rotation.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivt, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	pivt = tree->left;
	tmp = pivt->right;
	pivt->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivt;
	pivt->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = pivt;
		else
			tmp->right = pivt;
	}

	return (pivt);
}
