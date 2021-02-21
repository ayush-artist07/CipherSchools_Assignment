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
	int maxSumTree(TreeNode *root)
	{
		if(root==NULL)
		return 0;
		
		int lsum=root->data+maxSumTree(root->left);
		int rsum=root->data+maxSumTree(root->right);
		
		return max(lsum,rsum);		
		
	}
};

int main()
{
	TreeNode *root=new TreeNode(1);
	root->left=new TreeNode(-2);
	root->right=new TreeNode(3);
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	root->right->left=new TreeNode(-6);
	root->right->right=new TreeNode(2);
	
	cout<<root->maxSumTree(root);
	return 0;
}
