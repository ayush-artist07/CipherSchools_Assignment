/*

Given arrival and departure times of all trains that reach a railway station,
the task is to find the minimum number of platforms required for the railway station so that 
no train waits. We are given two arrays which represent arrival and departure times of trains 
that stop
*/

#include<bits/stdc++.h>
using namespace std;

int platformNeeded(int arrival[],int dept[],int n){	
	sort(arrival,arrival+n);
	sort(dept,dept+n);
	
	int platform_needed=1;
	int maxi=INT_MIN;
	int i=1,j=0;
	
	while(i<n && j<n){	
		
		if(arrival[i]<=dept[j]){
		platform_needed++;
		i++;
	}
		
		else if(arrival[i]>dept[j]){
			j++;
			platform_needed--;
		}
		
		if(platform_needed>maxi)
		maxi=platform_needed;
	}
		return maxi;	
}	

int main(){
	
	 int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
	cout<<platformNeeded(arr,dep,6);
	return 0;
}
