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
	
	void LeftView(TreeNode *root)
	{
		queue<TreeNode *> q;
		q.push(root);
		
		while(q.empty()==false)
		{
			int n=q.size();
			
			for(int i=1;i<=n;i++)
			{
			TreeNode *curr=q.front();
			q.pop();
			
			if(i==1)
			cout<<curr->data<<" ";
			
			if(curr->left!=NULL)
			q.push(curr->left);
			
			if(curr->right!=NULL)
			q.push(curr->right);
			
		}
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
	
	root->LeftView(root);
	
}
