#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int intersectionPoint(Node *head1,Node *head2)
{
	Node *p,*r=head1;
	Node *q,*s=head2;
	
	int count1,count2=0;
	
	//count the number of nodes in both trees
	while(p)
	{
		count1++;
		p=p->next;
	}
	
	while(q)
	{
		count2++;
		q=q->next;
	}
	
	//if there is difference in their sizes calculate it
	int diff=abs(count2-count1);

	//travers the linked list having greater number of nodes once done
	if(count2>count1)
	{
		for(int i=0;i<diff;i++)
			s=s->next;

	}
	else if(count1>count2)
	{
		for(int i=0;i<diff;i++)
			r=r->next;	
	}
	
		//cout<<s->data;
		//now start traversing both the linked list if they intersect they will point to each other
		while(r!=NULL && s!=NULL)
		{
			if(r==s)
			return r->data;
			
			r=r->next;
			s=s->next;
		}	
	
	return -1;	
}

int main()
{
Node* newNode;
 
    // Addition of new nodes
    Node* head1 = new Node();
    head1->data = 10;
 
    Node* head2 = new Node();
    head2->data = 3;
 
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
 
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
 
    head1->next->next->next = NULL;

    
    cout<<intersectionPoint(head1,head2);
    
}
