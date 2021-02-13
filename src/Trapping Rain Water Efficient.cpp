/*
Given n non-negative integers representing an elevation map where the width of each bar is 1,
 compute how much water it is able to trap after raining.
*/

#include <iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
        
        int n=(int)height.size();
        
        if(n>0){
            

        int left[n];
        int right[n];
        
        // traverse the array from start to end and calculate the max. height in left side of each element
        left[0]=height[0];
       for(int i=1;i<n;i++){
           
           if(height[i]>left[i-1])
               left[i]=height[i];
           
           else
               left[i]=left[i-1];
       } 
        
        //traverse from last to first and calculate max height in left of each element
        right[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--)
        {
            if(height[j]>right[j+1])
                right[j]=height[j];
            
            else
                right[j]=right[j+1];
        }
        
        int total_water=0;
        
        for(int i=0;i<n;i++){
            
            total_water+= min(right[i],left[i]) - height[i];
        }
      
        return total_water;
        
    }
    
    return 0;
        
       
    }

int main()
{
	vector <int> height{0,1,0,2,1,0,1,3,2,1,2,1};	
	cout<<trap(height);	
	
	return 0;
}

