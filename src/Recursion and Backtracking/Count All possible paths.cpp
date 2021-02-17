/*
The problem is to count all the possible paths from top left to bottom right of a mXn matrix 
with the constraints that from each cell you can either move only to right or down
*/

#include<iostream>
using namespace std;

int numberOfPaths(int i,int j){
	
	if(i==1 || j==1)
	return 1;
	
	
	return numberOfPaths(i-1,j) + numberOfPaths(i,j-1);
}


int main(){
	
	int m=3,n=3;
	cout<<numberOfPaths(m,n);
	
	
	return 0;
}
