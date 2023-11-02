#include "binary_trees.h"

/**
 * binary_tree_inorder - Function to send to print function in inorder way.
 *@tree: A pointer at node root.
 *@func: Pointer at function to print.
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
