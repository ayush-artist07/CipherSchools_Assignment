/*
Reverse a linked List in the size of k
*/

#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	
	
};

class LinkedList
{
	
	public:
		Node *head;
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
		
		for(int i=1;i<n;i++)
		{
			temp=new Node;
			temp->data=arr[i];
			temp->next=NULL;
			last->next=temp;
			last=temp;		
		}
	}
	
	Node * ReverseK(Node *head,int  k)
	{
		if (head==NULL)
        return NULL;
        
    	Node* current = head;
    	Node* nxt = NULL;
    	Node* prev = NULL;
    	int count = 0;
 
    //reverse first k nodes of the linked list 
    
    while (current != NULL && count < k) {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
        count++;
    }
 
    // next is now a pointer to (k+1)th node
    //Recursively call for the list starting from current.
    //And make rest of the list as next of first node 
    if (nxt != NULL)
        head->next = ReverseK(nxt,k);
 
     return prev;
	}
	
	void Display()
	{
		Node *p=head;
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}
	
};

int main()
{
	int arr[]={1,2,3,4,5};
	LinkedList l(arr,5);
	
	l.Display();
	l.ReverseK(l.head,2);
	l.Display();
	
	return 0;
	
	
}


