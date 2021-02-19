#include<iostream>
using namespace std;

class Node{
	
	public:
	int val;
	Node *next;		
};

class LinkedList{
	
	public:
		Node *head;

	LinkedList(){
		head=NULL;
	}
	
	LinkedList(int arr[],int n)
	{
		Node *last,*t;
		head=new Node;
		head->val=arr[0];
		last=head;
		
		for(int i=1;i<n;i++)
		{
			
			t=new Node;
			t->val=arr[i];
			t->next=NULL;
			last->next=t;
			last=t;
		}
	}

	Node *Merge(Node *head1,Node *head2)
	{
	
        if(!head1)
		 return head2;
        if(!head2) 
		return head1;
        
        Node* head = head1;
        if(head1->val > head2->val){
            head = head2;
            head2 = head2->next;
        } else
            head1 = head1->next;
        
        Node* curr = head;
        
        while(head1 && head2){
        	
            if(head1->val < head2->val){
                curr->next = head1;
                head1 = head1->next;
            } 
			else {
                curr->next = head2;
                head2 = head2->next;
            }
            
            curr = curr->next;
        }
        
        if(!head1) 
		curr->next = head2;
		
        else curr->next = head1;
        
        return head;
    }	
	
	void display()
	{
		Node *p=head;
		while(p!=NULL)
		{
			cout<<p->val<<" ";
			p=p->next;
		
			}		
			cout<<endl;
		}		
};

int main()
{
	int arr[]={1,2,3,5,12};
	int arr2[]={4,7,8,9,10};
	
	LinkedList l(arr,5);
	LinkedList m(arr2,5);
	
	l.display();
	m.display();
	l.Merge(l.head,m.head);
	
	l.display();	
	
	
	
}


