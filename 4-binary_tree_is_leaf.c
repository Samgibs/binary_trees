#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check if a node is leaf.
 *@node: A pointer at node.
 * Return: (1) If the node is leaf, otherwise (0)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
