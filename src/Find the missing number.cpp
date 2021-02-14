/*You are given a list of n-1 integers and these integers are in the range of 1 to n.
 There are no duplicates in the list.One of the integers is missing in the list. 
 Write an efficient code to find the missing integer.
 */
 
 #include<iostream>
 using namespace std;
 
 int missingNumber(int arr[],int n){
 	
 	int sum=0,asum=0;
 	//calculate the sum of elements 
 	for(int i=0;i<n;i++)
 	sum+=arr[i];
 	
 	//Actual sum of 1 to n elements
 	int m=n+1;
 	asum=m*(m+1)/2;
 	
 	return asum-sum;
 	
 }
 
 int main()
 {
 	int arr[]={1,2,3,4,5,7};
 	cout<<missingNumber(arr,6);
 	return 0;
 }
