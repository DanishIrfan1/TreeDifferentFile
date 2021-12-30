#include"TreeHeader.h"
void IntBinaryTree::displayInOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << " --> "<<nodePtr->data ;
		displayInOrder(nodePtr->right);
	}
}
void IntBinaryTree::showNodesInOrder(void)
{
	displayInOrder(root);
}
