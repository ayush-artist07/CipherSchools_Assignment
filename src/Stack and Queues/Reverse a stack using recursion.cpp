#include<iostream>
#include<stack>
using namespace std;

//Gloabal decelration so that can be used anywhere
stack<int> stk;

void insertInReverse(int temp)
{
	
	if(stk.size()==0)
	stk.push(temp);
	
	else
	{
	int t=stk.top(); 
    stk.pop();
    
	insertInReverse(temp);
	stk.push(t);
	}

}
 //this is a recursive function reverse the stack and stores it in recursion calling stack
 //we need to print it in bottom up manner
void reverse()
{
	if(stk.size()==0)
	return;
	
	int temp=stk.top();
	stk.pop();
	reverse();
	
	insertInReverse(temp);
	
}


int main()
{
	
	stk.push(12);
	stk.push(13);
	stk.push(14);
	
	reverse();
	
	 cout<<"Reversed Stack"
        <<endl; 
    
    while(!stk.empty()) 
    {        
        cout<<stk.top()<<" ";
        stk.pop(); 
    } 
	
}
