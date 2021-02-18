
#include<iostream>
using namespace std;

template <class T>
class Node
{
	public:
		T Data;
		Node *Next;
};

template<class T>
class LinkedList
{
	private:
		Node<T> *first;
	public:
		LinkdedList()
		{
			first=NULL;
		}
		LinkedList(T A[],int n);
		~LinkedList()
		{
			{
	Node<T> *p=first;
	while(first)
	{
		first=first->Next;
		delete p;
		p=first;
	}
}

		}
		void Display();
		void Insert(int index,T x);
		T Delete(int index);
		int Length();
};
template<class T>
LinkedList<T>::LinkedList(T A[],int n)
{
	int i;
	Node<T> *last,*t;
	first=new Node<T>;
	first->Data=A[0];
	first->Next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=new Node<T>;
		t->Data=A[i];
		t->Next=NULL;
		last->Next=t;
		last=t;
}
}
template <class T>
void LinkedList<T>::Display()
{
	Node<T> *p=first;
	while(p!=NULL)
	{
		cout<<p->Data<<" ";
		p=p->Next;
	}
	cout<<endl;
}

template <class T>
int LinkedList<T>::Length()
{
	Node<T> *p=first;
	int count=0;
	while(p)
	{
		count++;
		p=p->Next;
	}
	return count;
}
template <class T>
void LinkedList<T>::Insert(int index,T x)
{
	Node<T> *p=first;
	Node<T> *t;
	int i;
	
	if(index<0 || index> Length())
	return;
	
	t=new Node<T>;
	t->Data=x;
	t->Next=NULL;
	
	if(index==0)
	{
		t->Next=first;
		first=t;
	}
	
	else
	{
		for(i=0;i<index-1;i++)
			p=p->Next;
			t->Next=p->Next;
			p->Next=t;
		
	}
}
template <class T>
T LinkedList<T>::Delete(int index)
{
	Node<T> *p,*q=NULL;
	int x=-1,i;
	
	if(index < 1 || index>Length())
	return -1;
	if(index==1)
	{
		p=first;
		first=first->Next;
		x=p->Data;
		delete p;
	}
	else
	{
		p=first;
		for(i=0;i<index-1;i++)
		{
			q=p;
			p=p->Next;
		}
		q->Next=p->Next;
		x=p->Data;
		delete p;
	}
	return x;
}

int main()
{
	int A[]={1,2,3,4,5};

	LinkedList <int>l(A,5);
	 
	//l.Insert(0,10);
	//cout<<l.Delete(3)<<endl;
	//cout<<l.Length()<<endl;
	l.Display();
	return 0;
}
