/*
The N Queen is the problem of placing N chess queens on an N×N chessboard 
so that no two queens attack each other. 

*/



#include <iostream>
using namespace std;
#define N 4
  
int board[N][N];  

void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 
  
bool isSafe(int row, int col) 
{ 
  
    for (int i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
  
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
  
    for (int i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
  
bool NqueensUtil(int col) 
{ 
    if (col == N) 
        return true; 
  
    for (int i = 0; i < N; i++) { 
     
        if (isSafe(i, col)) { 
            board[i][col] = 1; 
  
            if (NqueensUtil(col + 1)) 
                return true; 
  
            board[i][col] = 0; //backtracking is done here
        } 
    } 
  
    return false; 
} 
  
bool Nqueens() 
{
    if (NqueensUtil(0) == false) { 
    	cout<<"Not Found"<<" ";
        return false; 
    } 
  
    printSolution(board); 
    return true; 
}

int main() {
	
	Nqueens(); 
    return 0; 
	
}
