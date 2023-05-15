#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		left_height = binary_tree_height(tree->left);
		left_height++;
	}
	if (tree->right)
	{
		right_height = binary_tree_height(tree->right);
		right_height++;
	}

	return (left_height - right_height);
}
