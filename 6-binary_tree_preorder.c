#include "binary_trees.h"

/**
 *binary_tree_preorder - go over the tree.
 *@tree: A pointer at node root.
 *@func: Pointer at function to print.
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	func(tree->n);
	binary_tree_inorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
