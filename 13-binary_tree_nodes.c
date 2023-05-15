#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculate the number of nodes in a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (binary_tree_nodes(tree->right) + 1);
	if (tree->left && !tree->right)
		return (binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}
