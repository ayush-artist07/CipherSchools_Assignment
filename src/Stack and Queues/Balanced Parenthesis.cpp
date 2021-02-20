/*
Given an expression string exp, write a program to examine 
whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp.
*/
//Balanced Parenthesis

#include<iostream>
#include<stack>
using namespace std;

stack <char> stk;
bool balanced(string expr)
{
	
	
	for(int i=0;i<(int)expr.size();i++)
	{
		//Push all the opening braces in the stack
		if(expr[i]=='{' || expr[i]== '(' || expr[i]=='[')
		stk.push(expr[i]);
			
	//if a closing brace is encountered pop out the corresponding parenthesis from stack
		else if(expr[i]=='}' || expr[i]== ')' || expr[i]==']')
		{
			if(stk.empty())
			return false;
			
			char x=stk.top();
			if(x=='{' && (expr[i]==']' || expr[i]==')'))
			return false;
			
			else if(x=='(' && (expr[i]==']' || expr[i]=='}'))
			return false;
			
			else if(x=='[' && (expr[i]=='}' || expr[i]==')'))
			return false;
		
		stk.pop();	
		}
		
	}
		//check if stack is empty after the traversal or not
	
	if(stk.empty()==false)
	return false;
	
	//if not return false else return true
	
	return true;
		
	}

int main()
{
	string expr = "{()}[]"; 
  
    // Function call 
    if (balanced(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0;
	
	
}
