/*
Given an array A of n positive numbers. The task is to find the first equilibrium point in an array. 
Equilibrium point in an array is a position such that the sum of elements before it 
is equal to the sum of elements after it.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:
Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2)*/


#include <iostream>
using namespace std;


class Solution{
    public:
    // Function to find equilibrium point in the array.
    // arr: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        long long curr_sum = 0;
        long long total = 0;
        for(int i = 0 ; i < n ; i++){
            total += arr[i];
        }
        
        for(int i = 0 ; i< n ; i++){
            curr_sum += arr[i];
            if(curr_sum - arr[i] == total- curr_sum)
                return i+1;
            
        }
        
        return -1;
    }

};

int main() {

    long long n;
    
    //taking input n
    cin >> n;
    long long a[n];

    //adding elements to the array
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    Solution ob;

    //calling equilibriumPoint() function
    cout << ob.equilibriumPoint(a, n) << endl;

    return 0;
}

