/*
Given a sorted array with possibly duplicate elements, 
the task is to find indexes of first and last occurrences of an element x in the given array. 
*/

//T.c log(n)+log(n) = O(log n)

#include<iostream>
using namespace std;

/* if x is present in arr[] then returns the index of
   FIRST occurrence of x in arr, otherwise
   returns -1 */
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
 
/* if x is present in arr[] then returns the index of
   LAST occurrence of x in , otherwise
   returns -1 */
int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
    	
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}

int main(){
	
	int arr[6]={1,2,2,2,3,4};
	int n=6;
	cout<<first(arr,0,n-1,2,n)<<" ";
	cout<<last(arr,0,n-1,2,n);
	
	
	return 0;
}
