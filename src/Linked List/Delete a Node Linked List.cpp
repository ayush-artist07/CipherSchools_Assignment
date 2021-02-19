#include<iostream>
using namespace std;

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

int Delete(int index)
{
	Node *p,*q=NULL;
	int x=-1,i;
	
	if(index < 1 )
	return -1;
	if(index==1)
	{
		p=head;
		head=head->next;
		x=p->data;
		delete p;
	}
	else
	{
		p=head;
		for(i=0;i<index-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		delete p;
	}
	return x;
}	
void Display()
{
	struct Node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	cout<<endl;
}
};

int main()
{
	int arr[]={1,2,3,5,12};
	LinkedList l(arr,5);
	
	l.Display();
	l.Delete(1);
	l.Display();
}


