#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * 
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        binary_tree_t *uncle = NULL;

        if (!node)
                return(NULL);
        
        if (!node->parent)
                return (NULL);

        uncle = binary_tree_sibling(node->parent);
        return (uncle);
}