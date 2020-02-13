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

int sum=0,sum1=0;
Node* spsum(Node* root)
{
	if(root==NULL)
	{
		//cout<<"No special sum"<<endl;
		return NULL;
	}
	
	if(root->left==NULL && root->right==NULL)
	
	{
		//cout<<"No special sum"<<endl;
		return root ;
	}
	else
	{
		sum+=root->left->data;
		return spsum(root->left);
		sum1+=root->right->data;
		return spsum(root->right);
	}
	if(sum1==sum)
	cout<<root->data<<" ";
	}

int main()
{
	Node *root=new Node(26);
	root->left=new Node(18);
	root->right=new Node(30);
	root->left->left=new Node(10);
	root->left->right=new Node(21);
	root->left->left->left=new Node(8);
	root->left->left->right=new Node(11);
	root->left->left->left->left=new Node(3);
	root->left->left->right->left=new Node(6);
	root->left->left->left->right=new Node(4);
	root->right->left=new Node(7);
	root->right->right=new Node(5);
	root->right->right->left=new Node(12);
	root->right->right->right=new Node(2);
	spsum(root);	
	
}
