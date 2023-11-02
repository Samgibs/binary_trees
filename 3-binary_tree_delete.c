#include "binary_trees.h"

/**
 * binary_tree_delete - Function to delete tree.
 * @tree: Pointer to the tree to delete.
 * Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
