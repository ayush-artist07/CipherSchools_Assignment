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
//	Reverse a linked List		
void Reverse()
	{
		Node *p=head;
		Node *q,*r=NULL;
		
		while(p!= NULL){
			
			r=q;
			q=p;
			p=p->next;
			q->next=r;	
		}
	head=q;
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
	l.display();
	l.Reverse();
	l.display();
	return 0;
}
