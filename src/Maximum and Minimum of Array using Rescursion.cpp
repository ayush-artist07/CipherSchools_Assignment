/* MAX and MIN of elements of array using recursion */

#include<iostream>
using namespace std;
int max(int x,int y){
	
	return x>y ? x :y ;
}
int min(int x,int y){
    
    return x>y ? y :x;
}
int maxElement(int arr[],int n){
	
	if(n==0)
	return 0;
	
	if(n==1)
	return arr[0];
	
	//We know the last element compare it with greater of rest of element
	return max(arr[n-1],maxElement(arr,n-1));	
}

int minElement(int arr[],int n){
    
    if(n==0)
    return 0;
    
    if(n==1)
    return arr[0];
    
    //We know the last element compare it with smaller of rest of element
    return min(arr[n-1],minElement(arr,n-1));
}

int main(){
	
	int arr[]={5,8,19,20,7,32};
	cout<<maxElement(arr,6)<<endl;
	cout<<minElement(arr,6);
	
	return 0;
}
