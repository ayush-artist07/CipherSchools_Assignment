/*There are two people that start from two different positions, let’s say x1 and x2. 
Both can jump v1 and v2 meters ahead respectively. We have to find if both will ever meet 
given that the number of jumps taken by both has to be same.

Print ‘Yes’ if they will meet,
print ‘No’ they will not.

*/

#include <iostream>
using namespace std;

bool willMeet(int x1,int x2,int v1,int v2){
	
	//if start point(x1) > x2 and v1 > v2 they will never meet each other
	if(x1>x2 && v1>v2)
	return false;
	
	//Similarly if x2>x1 and v1>v2 they will never meet
	if(x2>x1 && v2>v1)
	return false;
	
	//Assume x1 is ahead
	if(x2>x1){
		
		int temp=x1;
		x1=x2;
		x2=temp;		
	}	
	
	//else we will jump from x1 and x2 with v1 and v2 steps 
	//until x1 == x2 return true or if they pass each other stop and return false
	
	while(x1>=x2){
		
		if(x1==x2)
		return true;	
		
	}
	
	return false;
	
}


int main()
{
	int x1,x2,v1,v2;
	
	//Taking input from the user
	cin>>x1>>x2>>v1>>v2;
	willMeet(x1,x2,v1,v2)==false ? cout<<"No" : cout<<"Yes";
	
	
	return 0;
}

