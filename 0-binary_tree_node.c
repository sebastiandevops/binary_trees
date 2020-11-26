#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: pointer to the parent node of the node to create.
 * @value: pointer to the parent node of the node to create.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	binary_tree_t *current;
	binary_tree_t *root = parent;

	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	if (root == NULL)
	{
		root = tempNode;
	}
	else
	{
		current = root;
		parent  = NULL;
		while (1)
		{
			parent = current;
			if (value < parent->n)
			{
				current = current->left;
				if (current == NULL)
				{
				parent->left = tempNode;
				return (parent->left);
				}
			}
			else
			{
				current = current->right;
				if (current == NULL)
				{
					parent->right = tempNode;
					return (parent->right);
				}
			}
		}
	}
	free(tempNode);
	return (NULL);
}
