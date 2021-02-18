/*
Print all permutations of given string
*/

#include<iostream>
using namespace std;

/*
bool isSafe(string str,string toq,int i){
	
	if(str[i]=='A' && "B"==toq.substr(0,1))
	return false;
	
	return true;
}
*/

void getPermutationUtility(string str,string ans){
	
	if(str.size()==0){
	cout<<ans<<" ";
	return;
}
	
	for(int i=0;i<str.size();i++){
		
		
		string leftq = str.substr(0,i);
		string rightq= str.substr(i+1);
		string toq=leftq+rightq;	
		
		//if(isSafe(str,rightq,i))
		getPermutationUtility(toq,ans+str[i]);
			
	}	
}

void getPermutation(string str)
{
	string ans="";
	getPermutationUtility(str,ans);
}

int main(){
	
	string arr="ABC";
	getPermutation(arr);
	return 0;
}
