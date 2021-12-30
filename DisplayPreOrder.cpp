#include"TreeHeader.h"
void IntBinaryTree::displayPreOrder(TreeNode* nodePtr) {
	if (nodePtr)
	{
		cout << " --> "<<nodePtr->data ;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}
void IntBinaryTree::showNodesPreOrder()
{
	displayPreOrder(root);
}
