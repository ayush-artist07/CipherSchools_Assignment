/*
Given two sorted arrays, the task is to merge them in a sorted manner
*/

#include<iostream>
using namespace std;

void mergeSorted(int arr1[],int arr2[],int n1,int n2,int arr3[]){
	
	int i =0, j =0, k = 0;
 
    // Traverse both array
    while (i<n1 && j <n2)
    {
	        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
        
        
}

int main(){
	
	int arr[4]={2,6,7,10};
	int arr2[4]={1,5,8,12};
	
	int arr3[8];
	mergeSorted(arr,arr2,4,4,arr3);
	
	for(int i=0;i<8;i++)
	cout<<arr3[i]<<" ";
	
	return 0;
	
}
