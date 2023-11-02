#include "binary_trees.h"

/**
 * binary_tree_postorder - Go over the tree and organize the nodes
 * in postorder.
 *@tree: A pointer at node root.
 *@func: Pointer at function to print.
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
