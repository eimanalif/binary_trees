#include "binary_trees.h"

/**
 * bst_search - Searches for value in a binary search tree.
 * @tree: A pointer to the root node of BST to search.
 * @value: The value to search for in BST.
 *
 * Return: If the tree is NULL or value is not found, NULL.
 *         Otherwise, a pointer to the node containing the value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
