#include "binary_trees.h"

/**
 * binary_tree_node - create a new node
 * @parent: Pointer to the parent node
 * @value: Pointer to the value
 * Return: newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
