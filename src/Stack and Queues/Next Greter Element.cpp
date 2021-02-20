/*
Given an array, print the Next Greater Element (NGE) for every element. 
The Next greater Element for an element x is the first greater element on the right side of x in
the array. Elements for which no greater element exist, consider next greater element as -1.4
*/

#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[],int n)
{
	stack<int> stk;
	int arr1[n];
	
	for(int i=(n-1),j=0;i>=0;i--)
	{	
		//while stack is not empty && s.top < arr[i] pop until greater is found or 
		//stack becomes empty
		
		while(stk.empty()==false && stk.top() <= arr[i])
		{
			stk.pop();
		}
		
		//if stack is empty array[i] =-1
		if(stk.empty())
		arr1[i]=-1;	
		
		//else stack top is the greater element
		else
		arr1[i]=stk.top();
		
		stk.push(arr[i]);
		
}
		//Display the next greater element in the order of input
		for(int i=0;i<n;i++)
		cout<<arr1[i]<<" ";		
}
int main()
{
	int arr[]={4,3,2,1};
	int n=4;
	nextGreater(arr,n);
	return 0;
	
 } 
