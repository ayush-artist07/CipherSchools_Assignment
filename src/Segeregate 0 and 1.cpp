/*
You are given an array of 0s and 1s in random order. 
Segregate 0s on left side and 1s on right side of the array. 
Traverse array only once.
*/

#include<iostream>
using namespace std;

void Count(int arr[],int n){
	
	int count1=0;;
	for(int i=0;i<n;i++){
		
		if(arr[i]==0)
		count1++;
	}

	for(int i=0;i<count1;i++)
	arr[i]=0;
	
	for(int i=count1;i<n;i++)
	arr[i]=1;
	
}

void printC(int arr[],int n){
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
}

int main(){
	
	int arr[10]={1,0,0,0,1,0,1,0,0,1};
	Count(arr,10);
	printC(arr,10);
	
	
}
