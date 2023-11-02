#include "binary_trees.h"

/**
 * binary_tree_is_full - Function to checks if a binary tree is full
 * @tree: Pointer to tree.
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* When tree is NULL*/
	if (tree == NULL)
		return (0);
	/*If node doesn't has childrens*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*If node has childrens*/
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
