#include<iostream>
using namespace std;

void letterUtil(int digits[],int n,string op){
        
        string mapped[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        //when size of op array becomes size of digit put it in vector
        if(n==0){
            cout<<op<<" ";
        return;
        }
        
        //for each element in a[0] call each char at next digits
        string str=mapped[digits[0]];
        for(int i=0;i<str.size();i++){
            
            letterUtil(digits+1,n-1,op+str[i]);
                
        }
        
 
    }

void letterCombinations(string digits) {
        
        int n=(int)digits.size();
    
        
        if(n>0)
        {
        int dig[n];
        
        string op="";
        
        
        for(int i=0;i<n;i++)
            dig[i]=digits[i]-48;
        
        
        
        //make utility function
        letterUtil(dig,n,op);
        }
        
        return;
        
    }

int main(){
	
	string digits="29874";
	letterCombinations(digits);
	
	return 0;
	
}
