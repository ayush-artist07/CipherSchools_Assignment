/*Let 1 represent ‘A’, 2 represents ‘B’, etc. 
Given a digit sequence, count the number of possible decodings of the given digit sequence. 
*/

#include<iostream>
using namespace std;

int possibleDecodings(string digits,int n)
{
	if (n == 0 || n == 1) //if the size of digit becoame 1 or 0 means count inc. by 1
        return 1;

	if (digits[0] == '0') //if the start of digit is 0 say 012 there is no alphabet mapped with 0 return 0
        return 0;
        
        //start the count of possibilities
        int count=0;
        
         if (digits[n - 1] > '0')
        count += possibleDecodings(digits, n - 1);
        
        if (digits[n - 2] == '1' || (digits[n - 2] == '2' && digits[n - 1] < '7'))
        count += possibleDecodings(digits, n - 2);
	
	return count;
}


int main(){
	
	string digits="1234";
	string ans=" ";
	cout<<possibleDecodings(digits,4);
	return 0;
}
