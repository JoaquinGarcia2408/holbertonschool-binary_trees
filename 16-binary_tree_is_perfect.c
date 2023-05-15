#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * 
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int left_l = 0;
	int right_height = 0;
	int right_l = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);
	
	left_l = binary_tree_leaves(tree->left);
	right_l = binary_tree_leaves(tree->right);

	return (left_l == right_l);
}