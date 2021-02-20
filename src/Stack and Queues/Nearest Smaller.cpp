/*
Given an array of integers, find 
the nearest smaller number for every element such that the smaller element is on left side.*/

#include<iostream>
#include<stack>
using namespace std;

void nearestSmaller(int arr[],int n){
	
	stack<int>stk;
	int PS[n];
//previous smaller element
	for(int i=0;i<n;i++)
	{	
		//while stack is not empty && s.top > arr[i] pop until greater is found or 
		//stack becomes empty
		
		while(stk.empty()==false && stk.top() > arr[i])
		{
			stk.pop();
		}
		
		//if stack is empty array[i] =-1
		if(stk.empty())
		PS[i]=-1;	
		
		//else stack top is the greater element
		else
		PS[i]=stk.top();
		
		stk.push(arr[i]);		
	}
	
	for(int i=0;i<n;i++)
	cout<<PS[i]<<" ";
}

int main()
{
	int arr[]={1, 6, 4, 10, 2, 5};
	nearestSmaller(arr,6);
	
	return 0;
}
