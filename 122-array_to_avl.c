#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * Description: Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to root node of the created AVL, or NULL upon failure.
 */



avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i, k;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < i; k++)
		{
			if (array[k] == array[i])
				break;
		}
		if (k == i)
		{
			if (avl_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
