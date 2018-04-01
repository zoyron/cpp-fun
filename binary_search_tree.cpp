#include <iostream>
using namespace std;
struct bnode   // creating a node for the binary search
{
	int value;
	bnode* left;
	bnode* right;
};

bnode* createnode(int data)  // this function will just create a node. it will not  add the node to the tree.
{
	bnode* node = new bnode;
	node->value = data;
	node->left = node->right = NULL;
	return node;
}

bnode* addnode(bnode* root,int data)  // this function will add the node to the binary search tree.
{
	if(root == NULL)
		root = createnode(data);
	else if(data<=root->value)   // if the entered data value is less than the current node value then it will recurse towards to the left
		root->left = addnode(root->left,data);
	else
		root->right = addnode(root->right,data);  // if the entered data value is greater than the current node value than it will recurse to the right of the binary tree.
	return root;
}


bool search(bnode* root, int data)
{
	if(root == NULL)
		return false;
	else if(root->value == data)
		return true;
	else if(data<= root->value)  //  if value is less than search to left.
		return search(root->left,data);
	else   // if value is greater than search to the right of the binary tree.
		return search(root->right,data);
}


int main()
{
	bnode* node = NULL;
	node = addnode(node,15);
	node = addnode(node,10);
	node = addnode(node,20);
	node = addnode(node,25);
	node = addnode(node,8);
	node = addnode(node,12);
	int n;
	cout << "enter a number : ";
	cin >>n;
	if(search(node,n))
		cout << "Found"<<endl;
	else
		cout << "Not Found"<<endl;
	return 0;
}
