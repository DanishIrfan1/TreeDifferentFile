#include "TreeHeader.h"

bool IntBinaryTree::searchNode(int num)
{
	TreeNode* nodePtr = root;
	while (nodePtr)
	{
		if (nodePtr->data == num)
			return true;
		else if (num < nodePtr->data)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}
