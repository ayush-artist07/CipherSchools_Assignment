/*
Given a singly linked list L: L0?L1?…?Ln-1?Ln,
reorder it to: L0?Ln?L1?Ln-1?L2?Ln-2?…

You may not modify the values in the list's nodes, only nodes itself may be changed.
*/

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	
Node(int d)
{
	this->data=d;
	this->next=NULL;
}
}*head=NULL;

void reorderList(Node* head) {
		
        if (!head || !head->next) 
		return;
		
        Node *p = head;
        Node *pre = NULL;
        while (p->next) {
            pre = p;
            p = p->next;   
        }
        pre->next = NULL;
        Node *next = head->next;
        reorderList(next);
        
        head->next = p;
        p->next = next;     
	}

void display(Node *head)
{
	Node *p=head;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}	
	
int main()
{
	Node *p=new Node(10);
	p->next=new Node(12);
	p->next->next=new Node(14);
	p->next->next->next=new Node(15);
	display(p);
	reorderList(p);
	display(p);
	
	return 0;
	}	

