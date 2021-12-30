#include"TreeHeader.h"
void IntBinaryTree::displayPostOrder(TreeNode* nodePtr)
{
	if (nodePtr) {
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << " --> " << nodePtr->data ;
	}
}
void IntBinaryTree::showNodesPostOrder()
{
	displayPostOrder(root);
}
