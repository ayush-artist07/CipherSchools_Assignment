/*Write a function which takes an array and prints the majority element (if it exists),
 otherwise prints “No Majority Element”.
  A majority element in an array A[] of size n is an element that appears more than n/2 times 
  (and hence there is at most one such element). 
  */
  
  
  #include<iostream>
  using namespace std;
  
  //Based on fact that an element is always is najority
  
  int majorityElement(int arr [],int n){
  	
  	//We will consider first element as majority
  	int maj=arr[0]; 
	  int i=1,count=1;	
  	
  	while(i<n){	
	  	
  	//if we encounter same element again in arr increase the count by 1
  	if(count==0)
  	maj=arr[i];
  	
  	//if any other element is found decrement the counter and if counter becomes 0 
	//assign the curr element as majority and increase the count by 1
	if(maj==arr[i])
	count++;
	
	else
	count--;
	
	i++;
	
}
	  
return maj;	  
	  //when we have traverse the entire array we will have majority as our ans
  	
  }
  
  int main()
  {
  	int arr[]={ 1, 1, 2, 1, 3, 5, 1 };
  	cout<<majorityElement(arr,7);
  	
  	return 0;
  }
