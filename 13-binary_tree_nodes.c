#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of leaves of the tree.
 * @tree: Pointer to the tree.
 * Return: Number of leaves.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
