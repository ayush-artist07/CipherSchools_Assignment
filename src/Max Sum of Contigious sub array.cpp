/*
Write an efficient program to find the sum of contiguous subarray
 within a one-dimensional array of numbers which has the largest sum. */
 
 #include<iostream>
 using namespace std;
 
 //Kadene's algo - family chain (sum) is mine if gain else i am stand alone man
 int maxSum(int arr[],int n){
 	
 	int sum=arr[0];
 	int overall_sum=arr[0];
 	
 	for(int i=1;i<n;i++){
 		
 		if(sum+arr[i] < arr[i])
 		sum=arr[i];
 		
 		else
 		{
 			sum+=arr[i];
		 }
		 
		 if(overall_sum<sum)
		 overall_sum=sum;
		 
	 }
 	
 	return overall_sum;
 	
 }
 
 
 int main(){
 	
 	int arr[8]={-2, -3, 4, -1, -2, 1, 5, -3};
 	cout<<maxSum(arr,8);
 	
 }
