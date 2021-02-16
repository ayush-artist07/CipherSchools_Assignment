/*
Given an array of integers, print the array in such a way that the 
first element is first maximum and second element is first minimum and so on.
*/

#include<bits/stdc++.h>
using namespace std;

void alternateSort(int arr[],int n){
	
	sort(arr,arr+n);
	int i=0,j=n-1;
	int flag=1;
	
	while(i<=j){
		
		if(flag){
		cout<<arr[j]<<" ";
		flag=0;
		j--;
	}
	
	else{
		cout<<arr[i]<<" ";
		flag=1;
		i++;
	}		
}	
}
int main(){
	
	int arr[]={1, 6, 9, 4, 3, 7, 8, 2};
	alternateSort(arr,8);
	
	
}
