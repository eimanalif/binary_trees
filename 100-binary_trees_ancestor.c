#include"binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary
 *                          tree using level-order traversal
 * Description:function that goes through a binary tree using
 *                          level-order traversal
 * @first: Pointer to first node.
 * @second: Pointer to second node.
 * Return: If no common ancestors return NULL, else return common ancestor.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mam, *pap;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	mam = first->parent, pap = second->parent;

	if (first == pap || !mam || (!mam->parent && pap))
		return (binary_trees_ancestor(first, pap));
	else if (mam == second || !pap || (!pap->parent && mam))
		return (binary_trees_ancestor(mam, second));
	return (binary_trees_ancestor(mam, pap));
}