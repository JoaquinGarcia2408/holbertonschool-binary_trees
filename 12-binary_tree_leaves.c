#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculate the number of leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l = 0;
	size_t right_l = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_l += binary_tree_leaves(tree->left);
	right_l += binary_tree_leaves(tree->right);
	return (left_l + right_l);
}
