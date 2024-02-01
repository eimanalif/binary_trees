#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates binary tree.
 * description: Left-rotates binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivt, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivt = tree->right;
	tmp = pivt->left;
	pivt->left = tree;
	tree->right = tmp;
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
