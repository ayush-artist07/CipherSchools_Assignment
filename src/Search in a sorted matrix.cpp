/*
Given an n x n matrix and a number x, find the position of x in the matrix
if it is present in it. Otherwise, print “Not Found”. 
In the given matrix, every row and column is sorted in increasing order. 
The designed algorithm should have linear time complexity
*/

#include<iostream>
using namespace std;

string searchX(int mat[4][4],int x,int n){
	
	//initalize two indexes from top right corner of matrix
	int i=0,j=n-1;
	
	//loop over until we reach on edge of either row or column
	while(i<n && j>=0)
	{

	//if element at the index is equal to X print found and break
	if(mat[i][j]==x)
	return "Found";
	
	//else if element X is greater than curr element move down 
	//eliminate current row
	else if(mat[i][j]<x)
	i++;	
	
	//else if element X is smaller move to left eliminate the curr column
	else 
	j--;
}

return "Not Found";	
	
}

int main(){
	
	int mat[4][4]={ {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
                      
          int x=27;            
          cout<<searchX(mat,x,4);            
	
	return 0;
}
