#include "binary.h"


/**
 * binary_tree_node - a function that creates a binary tree node
 * Description:a function that creates a binary tree node
 * @perant:is the root node
 * @value:is a data in the node
 * Return:binary tree
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));

    if (new == NULL)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return (new);
    
}