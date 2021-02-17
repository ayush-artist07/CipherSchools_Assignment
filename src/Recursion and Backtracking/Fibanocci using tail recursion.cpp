/*
The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 

Fn= f[n-1] + f[n-2];
*/

#include<iostream>
using namespace std;
#define ll unsigned long long int

ll fib(ll n){
	
	if(n==0 || n==1)
	return n;	
	
	return fib(n-1) + fib(n-2);
	
}


int main(){
	
	cout<<fib(50);
	return 0;
}
