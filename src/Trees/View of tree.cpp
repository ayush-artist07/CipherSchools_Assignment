#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
	
	public:
	int data;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	
	void inorder(TreeNode *root)
	{
		if(root!=NULL)
		{
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
	}
	void preorder(TreeNode *root)
	{
		if(root!=NULL)
		{
			cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
		}
	}
	void postorder(TreeNode *root)
	{
		if(root!=NULL)
		{
			postorder(root->left);
			postorder(root->right);
			cout<<root->data<<" ";
		}
	}
	
	void levelOrder(TreeNode *root)
	{
		queue<TreeNode *> q;
		q.push(root);
		
		while(q.empty()==false)
		{
			TreeNode *curr=q.front();
			q.pop();
			
			cout<<curr->data<<" ";
			
			if(curr->left!=NULL)
			q.push(curr->left);
			
			if(curr->right!=NULL)
			q.push(curr->right);
			
		}
		
	}
	
};

int main()
{
	TreeNode *root=new TreeNode(10);
	root->left=new TreeNode(15);
	root->right=new TreeNode(20);
	root->left->left=new TreeNode(25);
	root->left->right=new TreeNode(30);
	
	root->inorder(root);cout<<endl;
	root->preorder(root);cout<<endl;
	root->postorder(root);cout<<endl;
	root->levelOrder(root);
	
}

