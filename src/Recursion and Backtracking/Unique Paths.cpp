/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. 
The robot is trying to reach the bottom-right corner of the grid.
*/

#include<iostream>
using namespace std;

//Since this problem is already solved using recursion i.e Count all possible paths and was getting TLE 
//on platform from where the question was given so i have solved it using basic DP

int uniquePaths(int m, int n) {
        
        int mat[m][n];
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                mat[i][j]=0;
            }
        
        for(int i=0;i<n;i++)
            mat[0][i]=1;
    
        for(int i=0;i<m;i++)
            mat[i][0]=1;
        
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++){
                
                mat[i][j]=mat[i-1][j]+mat[i][j-1];
            }        
    
    return mat[m-1][n-1];
    }

int main()
{
	int m=3,n=7;
	cout<<uniquePaths(m,n);
	return 0;
}
