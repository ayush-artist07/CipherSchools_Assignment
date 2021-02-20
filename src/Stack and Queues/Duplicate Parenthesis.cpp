/*
Given a balanced expression, find if it contains duplicate parenthesis or not.
A set of parenthesis are duplicate if the same subexpression is surrounded by multiple 
parenthesis.
*/

#include<iostream>
#include<stack>
using namespace std;

bool findDuplicateParenthesis(string str)
{
	stack<char> Stack; 
  
    // Iterate through the given expression 
    for (char ch : str) 
    { 
        // if current character is close parenthesis ')' 
        if (ch == ')') 
        { 
            // pop character from the stack 
            char top = Stack.top(); 
            Stack.pop(); 
  
            // stores the number of characters between a  
            // closing and opening parenthesis 
            // if this count is less than or equal to 1 
            // then the brackets are redundant else not 
            int count = 0; 
            while (top != '(') 
            { 
                count++; 
                top = Stack.top(); 
                Stack.pop(); 
            } 
            if(count < 1) { 
                return true; 
            } 
        } 
  
        // push open parenthesis '(', operators and 
        // operands to stack 
        else
            Stack.push(ch); 
    } 
  
    // No duplicates found 
    return false; 
} 

int main()
{
	string str="(a+b)";
	findDuplicateParenthesis(str)==1 ? cout<<"Duplicates" : cout<<"No Duplicates";
}
