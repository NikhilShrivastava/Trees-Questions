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

void inorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void preorder(Node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		inorder(root->left);
		inorder(root->right);
	}
}

void postorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		inorder(root->right);
		cout<<root->data<<" ";
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
	cout<<"Inorder Traversal"<<endl;
	inorder(root);
	cout<<"\nPreOrder Traversal"<<endl;
	preorder(root);
	cout<<"\nPostOrder Traversal"<<endl;
	postorder(root);
	
		
}
