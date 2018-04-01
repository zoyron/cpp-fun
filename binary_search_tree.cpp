#include <bits/stdc++.h>
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

int min(bnode* root) // this function will return the minimum value in the tree
{
if(root == NULL)
{
cout << "the tree is empty."<<endl;
	return -1;
}
	else if(root->left == NULL)
		return root->value;
	else
		return min(root->left);
}

int max(bnode* root)  // this function will return the maximum value from the tree.
{
if(root == NULL)
{
cout << "the tree is empty."<<endl;
	return -1;
}
	else if(root->right == NULL)
		return root->value;
	else
		return max(root->right);
}

int findheight(bnode* root) // this function will  return the height of the binary search tree in the input the address of the root node should be given
{
if(root == NULL)
	return -1;
	int lh = findheight(root->left)+1; // every time adding 1 to the height when traversing through the tree from bottm left to the root node
	int rh = findheight(root->right)+1; // // every time adding 1 to the height when traversing through the tree from bottom right to the root node
	return max(lh,rh);
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
	cout << "the min value in the tree is : "<<min(node)<<endl;
	cout << "the max value in the tree is : "<< max(node)<<endl;
	cout << "the height of the binary tree is : "<< findheight(node)<<endl;
	return 0;
}
