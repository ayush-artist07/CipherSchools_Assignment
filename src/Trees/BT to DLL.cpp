
#include<iostream>
using namespace std;

struct TreeNode{
	
	int data;
	TreeNode *left;
	TreeNode *right;
	
	TreeNode(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
	
	void BTtoDLL(TreeNode *root,TreeNode **head)
	{
		static TreeNode *prev=NULL;
		if(root==NULL)
		return;
		
		BTtoDLL(root->left,head);
	
		
		if(prev==NULL)
		*head=root;
		
		else
		{
			root->left=prev;
			prev->right=root;
			
		}
		
		prev=root;
		
		BTtoDLL(root->right,head);		
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
	void printList(TreeNode *node) 
	{ 
    while (node!=NULL) 
    { 
        cout << node->data << " "; 
        node = node->right;
    } 
} 

int main()
{
	TreeNode *root   = new TreeNode(10); 
    root->left        = new TreeNode(12); 
    root->right       = new TreeNode(15); 
    root->left->left  = new TreeNode(25); 
    root->left->right = new TreeNode(30); 
    root->right->left = new TreeNode(36);
	
	TreeNode *head=NULL;
	inorder(root);cout<<endl;
	BTtoDLL(root,&head);
	printList(head);

	return 0;
}
