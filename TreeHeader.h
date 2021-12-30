
#ifndef IntBinaryTree_H
#define IntBinaryTree_H
#include<iostream>
using namespace std;
class IntBinaryTree {
private:
	struct TreeNode
	{
		int data;
		TreeNode* left;
		TreeNode* right;
	};
	TreeNode* root;
	void displayInOrder(TreeNode*);
	void displayPreOrder(TreeNode*);
	void displayPostOrder(TreeNode*);
	void deleteNode(int, TreeNode*&);
	void makeDeletion(TreeNode*&);

public:
	IntBinaryTree();
	void insertNode(int num);
	bool searchNode(int);
	void remove(int);
	void showNodesInOrder();
	void showNodesPreOrder();
	void showNodesPostOrder();
};

#endif