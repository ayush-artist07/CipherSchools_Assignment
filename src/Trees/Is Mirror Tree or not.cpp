/*A tree is mirror of another tree */

#include<iostream>
using namespace std;

class Tree{
	
	public:
	int data;
	Tree *left;
	Tree *right;
	
	Tree(int data)
	{
		this->data=data;
		this->left=NULL;
			this->right=NULL;
	}
	
	bool isMirror(Tree *root1,Tree* root2)
	{
		if(root1==NULL && root2==NULL)
		return true;
		
		if(root1==NULL || root2==NULL)
		return false;
		
		else (root1->data==root2->data && (isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left)));
		
	}
};

int main()
{
	Tree *root1 = new Tree(1); 
    Tree *root2 = new Tree(1); 
    root1->left = new Tree(2); 
    root1->right = new Tree(3); 
    root1->left->left  = new Tree(4); 
    root1->left->right = new Tree(5); 
  
    root2->left = new Tree(3); 
    root2->right = new Tree(2); 
    root2->right->left = new Tree(5); 
    root2->right->right = new Tree(4);
    
    Tree *t;
    t->isMirror(root1,root2) ? cout<<"Is Mirror" : cout<<"Not Mirror";
    
    return 0;
    
}
