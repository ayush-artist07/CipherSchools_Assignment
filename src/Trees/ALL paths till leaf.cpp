#include<iostream>
#include<vector>
using namespace std;
struct Node
{
	int data;
	Node *right;
	Node *left;
	
	Node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
void print(vector <int> arr)
{
	for(int x:arr)
	cout<<x<<" ";
	
	cout<<"\n";
}

void path(Node *root)
{
	static vector<int> ans;
	if(root==NULL)
	return;
	
	int val=root->data;
	ans.push_back(val);
	
	if(root->left==NULL && root->right==NULL){
	print(ans);
	}
	
	else{
		path(root->left);
		ans.pop_back();		
		path(root->right);
		ans.pop_back();
	}
	
}
int main()
{
	Node *root = new Node(10);  
    //root->left = new Node(8);  
    //root->left->left = new Node(2);  
    //root->left->left->left = new Node(3);  
    //root->left->left->left->left = new Node(5);  
    //root->left->left->left->left->left = new Node(2);
    
    path(root);
	return 0;
}
