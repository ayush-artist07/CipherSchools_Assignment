#include<iostream>
using namespace std;

//Reverse a Linked List

class Node{
	
	public:
	int data;
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
		head->data=arr[0];
		last=head;
		
		for(int i=1;i<n;i++){
			
			t=new Node;
			t->data=arr[i];
			t->next=NULL;
			last->next=t;
			last=t;
		}
		}

	int detectRemoveLoop()
	{
		Node *slow=head;
		Node *fast=head;
		
		
		while(slow && fast && fast->next!=NULL)
		{
				
		slow=slow->next;
		fast=fast->next->next;
		
		if(slow==fast)
			{
				removeLoop(slow,fast);
				return 1;
			}
		}
	return 0;	
	}
	
	void removeLoop(Node *slow,Node *fast)
	{
		slow = head;           
          if(slow == fast) {
              while(fast->next != slow) fast = fast->next;
        }
          else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
 
        /* since fast->next is the looping point */
        fast->next = NULL; /* remove loop */
    }
	
	void display()
	{
		Node *p=head;
		while(p!=NULL){
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;	
		}	
};
int main()
{
	int arr[5]={1,2,3,4,5};
	LinkedList l(arr,5);
	l.head->next->next->next->next->next = l.head->next->next;
	//l.display(); if want to verify, run this and will go into infinite loop
	l.detectRemoveLoop()==1 ? cout<<"There is loop afetr loop removal"<<endl : cout<<"No Loop"<<endl;
	l.display();
	return 0;
}
