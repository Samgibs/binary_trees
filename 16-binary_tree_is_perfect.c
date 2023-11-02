#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect.
 * @tree: Pointer to the tree.
 * Return: 1 if the binary tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

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

/**
 * binary_tree_height - Function to give the height of tree.
 * @tree: Pointer to the tree.
 * Return: 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
