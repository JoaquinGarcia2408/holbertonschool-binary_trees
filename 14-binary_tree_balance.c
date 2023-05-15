#include "binary_trees.h"
/**
 * 
*/
int binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return(0);
        int left_height = binary_tree_height(tree->left);
        int right_height = binary_tree_height(tree->right);

        return (left_height - right_height);
}