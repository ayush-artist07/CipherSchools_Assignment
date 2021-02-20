/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can 
be made of a number of contiguous bars. 
For simplicity, assume that all bars have same width and the width is 1 unit.
*/

#include<iostream>
#include<stack>
using namespace std;

//Using next smaller and previous smaller element
int histogram(int arr[],int n)
{
	//Next Smaller element 
	stack<int> stk;
	int NS[n];
	int PS[n];
	
	for(int i=(n-1),j=0;i>=0;i--)
	{	
		//while stack is not empty && s.top > arr[i] pop until greater is found or 
		//stack becomes empty
		
		while(stk.empty()==false && arr[stk.top()] > arr[i])
		{
			stk.pop();
		}
		
		//if stack is empty array[i] =-1
		if(stk.empty())
		NS[i]=n;	
		
		//else stack top is the greater element
		else
		NS[i]=stk.top();
		
		stk.push(i);		
	}
	
	while(!stk.empty())
	stk.pop();
	
	//previous smaller element
	for(int i=0;i<n;i++)
	{	
		//while stack is not empty && s.top > arr[i] pop until greater is found or 
		//stack becomes empty
		
		while(stk.empty()==false && arr[stk.top()] > arr[i])
		{
			stk.pop();
		}
		
		//if stack is empty array[i] =-1
		if(stk.empty())
		PS[i]=-1;	
		
		//else stack top is the greater element
		else
		PS[i]=stk.top();
		
		stk.push(i);		
	}
	
	int curr_area=0;
	int max_area=curr_area;
	
	for(int i=0;i<n;i++){
	curr_area=arr[i]*(NS[i]-PS[i]-1);
	
	if(curr_area>max_area)
	max_area=curr_area;
}
	
	return max_area;
	
}


int main()
{
	int arr[]={6,2,5,4,5,1,6};
	cout<<"Maximum Area is:- ";
	cout<<histogram(arr,7);
	
}
