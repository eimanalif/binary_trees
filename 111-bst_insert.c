#include "binary_trees.h"

/**
 * bst_insert - Inserts value in Binary Search Tree.
 * Description: Inserts value in Binary Search Tree.
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in node to be inserted.
 * Return: A pointer to created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *currnt, *new;

	if (tree != NULL)
	{
		currnt = *tree;

		if (currnt == NULL)
		{
			new = binary_tree_node(currnt, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < currnt->n) /* insert in left subtree */
		{
			if (currnt->left != NULL)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(currnt, value);
			if (new == NULL)
				return (NULL);
			return (currnt->left = new);
		}
		if (value > currnt->n) /* insert in right subtree */
		{
			if (currnt->right != NULL)
				return (bst_insert(&currnt->right, value));

			new = binary_tree_node(currnt, value);
			if (new == NULL)
				return (NULL);
			return (currnt->right = new);
		}
	}
	return (NULL);
}