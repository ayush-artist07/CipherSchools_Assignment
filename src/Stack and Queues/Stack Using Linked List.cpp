#include<iostream>
using namespace std;

class Node{
	
	public:
	int data;
	Node *next;
	
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
class stack{
	
	public:
	Node *top;
	int size;
	
	stack()
	{
		top=NULL;
		size=0;
	}
	
	int getsize()
	{
		return size;		
	}
	
void push(int x)
	{
		Node *temp=new Node(x);
		
		temp->next=top;
		top=temp;
		
		size++;		
		
	}
		
int getTop()
	{
		if(getsize()==0)
		return 0;
		
		return top->data;	
	}	
	void pop()	
	{
		if(top==NULL){
		cout<<"Underflow";
		return;
		}
		
		Node *temp;
		temp=top;
		
		top=top->next;
		temp->next=NULL;
		
		delete temp;
		size--;	
	}

void display(Node *p)
		{
			if(p==NULL)
			return;
			
			cout<<p->data<<" ";
			display(p->next);		
						
		}
			
};


int main()
{
	stack stk;
	//Push Operations
	stk.push(10);
	stk.push(12);
	stk.push(13);
	stk.push(14);
	stk.push(15);

	//top element and size of the stack
	cout<<stk.getTop()<<endl;
	cout<<stk.getsize()<<endl;
	//pop opertion
	stk.pop();
	//display the stack 
	stk.display(stk.top);cout<<endl;
	cout<<stk.getsize()<<endl;
	return 0;
}
