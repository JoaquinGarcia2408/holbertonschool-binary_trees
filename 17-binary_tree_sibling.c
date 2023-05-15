#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree
 *
 * @node: Pointer to the node to find the sibling for
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or invalid input
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	sibling = node;
	node = node->parent;

	if (node->right && node->left)
	{
		if (node->right == sibling)
			return (node->left);
		return (node->right);
	}
	return (NULL);
}
