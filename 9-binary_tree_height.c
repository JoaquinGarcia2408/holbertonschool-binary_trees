#include "binary_trees.h"

/**
* binary_tree_height - Calculate the height of a binary tree
*
* @tree: Pointer to the root node of the tree
*
* Return: The height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lef = 0;
	int rig = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lef = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rig = 1 + binary_tree_height(tree->right);
	if (lef > rig)
		return (lef);

	return (rig);
}
