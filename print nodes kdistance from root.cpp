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

void printkdist(Node *root,int k)
{
	if(root==NULL)
	return ;
	if(k==0) cout<<root->data<<" ";
	else
	{
		printkdist(root->left,k-1);
		printkdist(root->right,k-1);
	}
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
	int k;
	cin>>k;
	cout<<"K distance from root:";
	printkdist(root,k);
	
	
		
}
