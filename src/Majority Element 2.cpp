/*
We are given a read only array of n integers. Find any element that appears more than n/3 times in the array in linear time and constant additional space.
 If no such element exists, return -1.
 
 */
 
 #include<iostream>
 using namespace std;
 
 int majority2(int arr[],int n){
 	
 	//Have two variables and intialize them as Max.
 	int maj1,maj2=INT_MAX;
 	int count1,count2=0;
 	
 	for(int i=0;i<n;i++){
 		
 	//if element is equal to maj1 inc. count1 by 1
 	if(maj1==arr[i])
 	count1++; 	
 	
 	//if element is equal to maj2 inc. count2 by 1
 	else if(maj2==arr[i])
 	count2++;
 	
 	//if count1=0 assign curr element to maj1
 	if(count1==0)
 	maj1=arr[i];
	  	
 	//else if count2=0 assign curr element to maj2
 	else if(count2==0)
 	maj2=arr[i];
 	
 	else{
 		count1--;
 		count2--;
	 }
	 
	 	
}
 	
 	count1=0;
 	count2=0;	
 	
 	//traverse from start to end to find which one of maj1 and maj2 is n/3 of arr
 	for(int i=0;i<n;i++)
 	{
 		if(arr[i]==maj1)
 		count1++;
 		
 		if(arr[i]==maj2)
 		count2++;
 		
	 }
	 
	 if(count1> n/3)
	 return maj1;
	 
	 else if(count2 > n/3)
	 return maj2;
 	
 	return -1;
 	
 }
 
 
 int main()
 {
 	int arr[]={10,10,20,20,10};
 	cout<<majority2(arr,5);
 	return 0;
 }
