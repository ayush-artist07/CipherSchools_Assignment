/*
The cost of a stock on each day is given in an array, find the max profit that you can make by buying and 
selling in those days. For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, 
the maximum profit can earned by buying on day 0, selling on day 3. Again buy on day 4 and sell on day 6. 
If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.

*/


#include <iostream>
using namespace std;


void BuySel(int price[], int n)
{
    // Prices must be given for at least two days
    if (n == 1)
        return;
 
    // Traverse through given price array
    int i = 0;
    while (i < n - 1) {
 
        // Find Local Minima
        // Note that the limit is (n-2) as we are
        // comparing present element to the next element
        while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;
 
        // If we reached the end, break
        // as no further solution possible
        if (i == n - 1)
            break;
 
        // Store the index of minima
        int buy = i++;
 
        // Find Local Maxima
        // Note that the limit is (n-1) as we are
        // comparing to previous element
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;
 
        // Store the index of maxima
        int sel = i - 1;
 
        cout << "Buy:" << buy<<endl;
             cout<< "Sell:" << sel << endl;
    }
}
 

int main()
{
    
    int price[7] = { 100, 180, 260, 310, 40, 535, 695 };
 
    BuySel(price, 7);
 
    return 0;
}
