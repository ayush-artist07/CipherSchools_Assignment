/*	Rat in a Maze Problem
A Maze is given as N*N binary matrix of blocks where source block is the upper left most block 
i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1]. 
A rat starts from source and has to reach the destination. The rat can move only in two directions: 
forward and down. 
In the maze matrix, 0 means the block is a dead end and 1 means the block can be used in
 the path from source to destination. 
*/

#include<iostream>
using namespace std;


bool isSafe(int mat[5][5],int x,int y,int n){
	
	//All conditions where rat can go i.e  matrix within the limits and value at pos is 1
	if(x<n && x>=0 && y<n && y>=0 && mat[x][y]==1)
	return true;
	
	return false;	
}

bool solvable(int mat[5][5],int x,int y,int n,int ans[5][5]){
	
{
	//if rat reaches bottom right return true
	if(x==n-1 && y==n-1){
		ans[x][y]=1;
	return true;
}
	
	//Check the condition if allowed move there true is returned else although it reaches but 
	//would execute last false return statement and return false
	
	if(isSafe(mat,x+1,y,n)){
		ans[x+1][y]=1;
		if(solvable(mat,x+1,y,n,ans)==true)
		return true;
		
		ans[x+1][y]=0;
	}
	
	//Check the condition if allowed move there
	if(isSafe(mat,x,y+1,n)){
		ans[x][y+1]=1;
		if(solvable(mat,x,y+1,n,ans)==true)
		return true;	
		
		ans[x][y+1]=0;
	}
	return false;
}		
}

int main(){
	
	int mat[5][5]={{1,0,0,0,0},
	{1,1,0,1,0},
	{0,1,1,1,0},
	{0,0,0,1,0},
	{1,1,1,1,1}};
	
	int ans[5][5];
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		ans[i][j]=0;
	}
}	
	
	ans[0][0]=1;
	cout<<solvable(mat,0,0,5,ans)<<endl;
	
		for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cout<<ans[i][j]<<" ";
	}
	cout<<endl;
}
	
}
