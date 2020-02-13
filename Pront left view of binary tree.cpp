//if left child exist then print the left child if doesnot exist then check for right child if irt exists then print it;
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

void printleft(Node *root)
{
	if(root==NULL)
	return ;
	queue<Node*>q;
	q.push(root);
	while(q.empty()==false)
	{
		int count=q.size();
		for(int i=0;i<count;i++)
		{
			Node *temp=q.front();
			q.pop();
			if(i==0)
			cout<<temp->data<<" ";
			if(temp->left!=NULL)
			q.push(temp->left);
			if(temp->right!=NULL)
			q.push(temp->right);
		}
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
	cout<<"Left view of binary tree is:";
	printleft(root);
	
	
		
}
