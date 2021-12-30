#include "TreeHeader.h"

void IntBinaryTree::makeDeletion(TreeNode*& nodePtr)
{
	TreeNode* tempNodePtr; // Temporary pointer, used in
	// reattaching the left subtree.
	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; // Reattach the left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; // Reattach the right child
		delete tempNodePtr;
	}
	// If the node has two children.
	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;
		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

void IntBinaryTree::deleteNode(int num, TreeNode*& nodePtr)
{
	if (num < nodePtr->data)
		deleteNode(num, nodePtr->left);
	else if (num > nodePtr->data)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}
void IntBinaryTree::remove(int num)
{
	deleteNode(num, root);
}

