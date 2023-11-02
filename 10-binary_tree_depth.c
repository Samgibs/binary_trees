#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree.
 * @tree: pointer at root of tree.
 * Return: the level of node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int level = 0;

	return (level_of_node(tree, level));
}

/**
 * level_of_node - function that help to find the level of node.
 * @tree: pointer at root of tree.
 * @level: level of node.
 * Return: the level of node.
 */
int level_of_node(const binary_tree_t *tree, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (level);
	tree = (tree)->parent;
	return (level_of_node(tree, level + 1));
}
