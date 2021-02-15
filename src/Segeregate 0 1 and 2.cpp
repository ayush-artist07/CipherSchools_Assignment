/*
Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.
*/

#include<iostream>
using namespace std;

void swap(int A[], int i, int j) {
	
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void Segregate(int arr[],int n){
	
	//using dutch man flag concept
	
    int start = 0, mid = 0;
    int pivot = 1,end=n-1;
 
    while (mid <= end)
    {
    	//mid is responsible for all 1s  start for all 0 and end for all 2 to be segregated
        if (arr[mid] < pivot)        // current element is 0
        {
        	//wrong position 
            swap(arr, start, mid);
            ++start, ++mid;
        }
        else if (arr[mid] > pivot)    // current element is 2
        {
            swap(arr, mid, end);
            --end;
        }
        else                        // current element is 1
        {
            ++mid;
        }
    }
	
}

void printSeg(int arr[],int n){
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main(){
	
	int arr[]={ 0, 1, 2, 2, 1, 0, 0, 2, 0, 1};
	
	Segregate(arr,10);
	printSeg(arr,10);
	
	return 0;
}
