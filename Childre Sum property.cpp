#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int d)
	{
		data=d;
		left=right=NULL;
	}
};

bool isSum(Node *root)
{
	if(root==NULL)
	return true;
	if(root->left==NULL && root->right==NULL)
	return true;
	int sum=0;
	if(root->left!=NULL) sum+=root->left->data;
	if(root->right!=NULL) sum+=root->right->data;
	return (root->data==sum && isSum(root->left) && isSum(root->right));
	
}

int main()
{
	Node *root=new Node(10);
	root->left=new Node(15);
	root->right=new Node(20);
	root->left->left=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	root->right->left->left=new Node(60);
	root->right->left->right=new Node(70);
	//cout<<isSum(root)<<endl;
	if(isSum(root))
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;	
	
		
}
