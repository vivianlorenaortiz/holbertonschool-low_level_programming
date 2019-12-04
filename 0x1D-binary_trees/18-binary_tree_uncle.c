#include "binary_trees.h"
/**
 *binary_tree_uncle - Function that finds the uncle of a node.
 *@node: Is a pointer to the node to find the uncle.
 *
 *Return: Is node is NULL, return NULL or if node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
