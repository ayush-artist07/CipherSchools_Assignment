/*There are two people that start from two different positions, let’s say x1 and x2. 
Both can jump v1 and v2 meters ahead respectively. We have to find if both will ever meet 
given that the number of jumps taken by both has to be same.

Print ‘Yes’ if they will meet,
print ‘No’ they will not.

*/

#include <iostream>
using namespace std;

void swap(int *x,int *y){
	
	int temp=*x;
	*x=*y;
	*y=temp;
		
}

bool willMeet(int x1,int x2,int v1,int v2){
	
	//if start point(x1) > x2 and v1 > v2 they will never meet each other
	if(x1>x2 && v1>v2)
	return false;
	
	//Similarly if x2>x1 and v1>v2 they will never meet
	if(x2>x1 && v2>v1)
	return false;
	
	//Assume x1 is ahead
	if(x2>x1){
		
		swap(&x2,&x1);
		swap(&v2,&v1);
				
	}	
	
	//Using relative speed if relative speed of two is a factor of difference between two distances
	//return true else false	
	
	int d=x2-x1;
	int s=v2-v1;
	
	if(d%s==0)
	return true;
	
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

