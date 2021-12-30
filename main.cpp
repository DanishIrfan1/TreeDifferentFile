#include <iostream>
#include "TreeHeader.h"
using namespace std;
int main()
{
	IntBinaryTree tree;
	int num, val, findval,delval;
	cout << "Inserting nodes. " << endl;
	cout << "How much you enter value: ";
	cin >> num;
	cout << "Enter Values " << endl;
	for (int i = 0; i < num; i++) {
		cin >> val;
		tree.insertNode(val);
	}
	cout << endl;
	cout << "****** Inserting Done. *********" << endl;
	cout << "************ Display For Order Traversal **********" << endl;
	
	cout << "Display Data in InOrder" << endl;
	tree.showNodesInOrder();
	cout << endl;
	cout << "Display Data in PreOrder" << endl;
	tree.showNodesPreOrder();
	cout << endl;
	cout << "Display Data in PostOrder" << endl;
	tree.showNodesPostOrder();
	cout << endl<<"************************Display End*******************" << endl;
	cout << "****************Searching Start***********" << endl;
	cout << "Which Character You want to Search:  " ;
	cin >> findval;
	if (tree.searchNode(findval))
		cout << findval<<" is found in the tree.\n";
	else
		cout << findval<<" is not found in the tree.\n";
	cout << "*****************Searching End***********************" << endl;
	cout << "**************Deletion Start *************" << endl;
	cout << "Which Number you want to Delete...\n";
	cin >> delval;
	tree.remove(delval);
	cout << "Now, here are the nodes in InOrder:\n";
	tree.showNodesInOrder();

	cout << endl<<"**********************Deletion End******************* " << endl;
	return 0;
}

