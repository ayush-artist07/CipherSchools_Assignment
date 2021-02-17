/*
Write a function to generate all possible n pairs of balanced parentheses.
*/

#include <iostream>
using namespace std;

void printParenthesis(int open,int close,int n,string str)
{
	if(open==n && close==n)
	{
		cout<<str<<endl;
		return;		
	}
	
	if(open>close)
	printParenthesis(open,close+1,n,str+"}");
	
	if(open<n)
	printParenthesis(open+1,close,n,str+"{");
		
}

int main(){
	
	int open=0,close=0,n=2;
	string str=" ";
	printParenthesis(open,close,n,str);
	
	return 0;
	
}
