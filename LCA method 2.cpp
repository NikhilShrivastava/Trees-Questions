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

Node* lca(Node *root, int n1,int n2)
{
	if(root==NULL) return NULL;
	if(root->data==n1 || root->data==n2)
	return root;
	Node *lca1=lca(root->left,n1,n2);
	Node *lca2=lca(root->right,n1,n2);
	if(lca1!=NULL && lca2!=NULL)
	return root;
	if(lca1!=NULL)
	return lca1;
	else
	return lca2;
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
	//spiralorder(root);
	int n1,n2;
	cin>>n1>>n2;
	Node *temp=lca(root,n1,n2);
	cout<<"LCA:"<<temp->data<<endl;	
}
