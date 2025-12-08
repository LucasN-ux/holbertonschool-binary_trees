#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Pointer to the value
 * Return: newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->parent = parent;
	right_child->left = NULL;
	right_child->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = right_child;

	parent->right = right_child;

	return (right_child);
}
