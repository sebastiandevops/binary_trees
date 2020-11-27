#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number
 * of leaves.
 *
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (leaves);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (leaves == 0)
		leaves = 1;
	return (leaves);
}
