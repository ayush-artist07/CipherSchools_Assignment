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
	int height(TreeNode *root)
	{
		if(root==NULL)
		return 0;
		
		return 1+max(height(root->left),height(root->right));
	}
	int diameter(TreeNode *root)
	{
		if (root==NULL)
        return 0;
 
    // get the height of left and right sub-trees
    int lheight = height(root->left);
    int rheight = height(root->right);
 
    // get the diameter of left and right sub-trees
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
 
    // Return max of following three
    // 1) Diameter of left subtree
    // 2) Diameter of right subtree
    // 3) Height of left subtree + height of right subtree + 1
    return max(lheight + rheight + 1,max(ldiameter, rdiameter));
	}
};

int main()
{
	TreeNode *root=new TreeNode(10);
	root->left=new TreeNode(15);
	root->right=new TreeNode(20);
	root->left->left=new TreeNode(25);
	root->left->right=new TreeNode(30);
	
	cout<<root->diameter(root);
	return 0;
}
