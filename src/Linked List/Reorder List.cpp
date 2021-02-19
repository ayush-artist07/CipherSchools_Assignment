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
		
        if(!head || !head->next) return;
        
        Node *slow = head, *fast = head;
        
        //Find the mid of the list
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node *prev = nullptr, *curr = slow, *tmp;
        
        //reverse the list after the mid of the list
        while(curr){
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        
        //Traverse the two list one reversed and one as usual 
        //and modify the links
        Node *n1 = head, *n2 = prev;
        while(n2->next){
            tmp = n1->next;
            n1->next = n2;
            n1 = tmp;
            
            tmp = n2->next;
            n2->next = n1;
            n2 = tmp;
        }
       
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

