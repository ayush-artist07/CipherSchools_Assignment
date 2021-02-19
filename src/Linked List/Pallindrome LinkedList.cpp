#include<iostream>
#include<stack>
using namespace std;

//IsPallindrome a given linkedList
class Node{
	
	public:
	int data;
	Node *next;
};

class LinkedList{
	
	Node *head;
	
	public:
		LinkedList()
		{
			head=NULL;
		}
		
		LinkedList(int arr[],int n)
		{
			Node *p,*temp,*last;
			p=new Node;
			p->data=arr[0];
			p->next=NULL;
			head=p;
			last=head;
			
			for(int i=1;i<n;i++){
				
				temp=new Node;
				temp->data=arr[i];
				temp->next=NULL;
				last->next=temp;
				last=temp;				
			}
		}
	bool isPallindrome()
	{
		stack <char> stk;
		Node *p,*q=head;
		//Push all the elements in the stack 
		while(p!=NULL)
		{
			stk.push(p->data);
			p=p->next;	
		}
		//Now again traverse the linked list in from head and compare it with stack top
		//if stk.top != curr list eleemnt return false
		while(q!=NULL)
		{
			if(stk.top()!= q->data)
			return false;
			
			q=q->next;
			stk.pop();
		}
	return true;	
	}	
	void display()
	{
		Node *p=head;
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p=p->next;
		
			}		
			cout<<endl;
		}
	
};

	
	
int main()
{
	int arr[4]={1,2,2,1};
	LinkedList l(arr,4);
	l.display();
	l.isPallindrome() == 0 ? cout<<"Not a Pallindrome" : cout<<"Is a Pallindrome";
	return 0;
}
