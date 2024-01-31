#include "binary_trees.h"

/**
 * binary_tree_delete - a function that delets an entire binary tree
 * Description: a function to delete binary treeand return void
 * @tree: pointer of the tree
 * Return:void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
    }
}
