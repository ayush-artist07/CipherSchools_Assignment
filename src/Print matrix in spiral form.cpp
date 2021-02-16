/*
Print a given matrix in spiral form
Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/

#include<iostream>
using namespace std;

void spiralM(int mat[4][4],int r,int c){
	
	//take four pointers and specify them 4 boundaries and keep updating
	int top=0,bottom=r-1,left=0,right=c-1;
	int dir=0;
	
	while(top<=bottom && left<=r) {
		
	//if dir=0 we have to move in row i.e i++
	if(dir==0)
	{
		for(int i=left;i<=right;i++)
		cout<<mat[top][i]<<" "; // 1 2 3 4
		top++;
	}
	
	if(dir==1)
	{
		for(int i=top;i<=bottom;i++){
		cout<<mat[i][right]<<" ";  //8 12 16
		
		//cout<<i<<" "<<right<<endl;
	}
		right--;
	}
	if(dir==2)
	{
		for(int i=right;i>=left;i--)
			cout<<mat[bottom][i]<<" "; 		//15 14 13
			bottom--;
		}
		
	if(dir==3)
	{
		for(int i=bottom;i>=top; i--)
		cout<<mat[i][left]<<" ";
		left++;
	}
	
	dir=(dir+1)%4;	
		
	}
	
	
}

int main(){
	
	int a[3][4] = { { 1,2,3,4},
                    { 7, 8, 9, 10 },
                    { 13, 14, 15, 16 } };
                    
                    spiralM(a,3,4);
	return 0;
}
