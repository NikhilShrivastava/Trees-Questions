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

int res=0;
int height(Node *root)
{
	if(root==NULL) return 0;
	 int lh=height(root->left);
	 int rh=height(root->right);
	 res=max(res,lh+rh+1);
	 return 1+max(lh,rh);
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
	cout<<"Diameter of tree:"<<height(root)<<endl;	
}
