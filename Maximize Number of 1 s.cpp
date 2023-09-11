/*
Given a binary array arr of size N and an integer M. 
Find the maximum number of consecutive 1's produced by flipping at most M 0's.
 
Example 1:
Input:
N = 3
arr[] = {1, 0, 1}
M = 1
Output:
3
Explanation:
Maximum subarray is of size 3
which can be made subarray of all 1 after
flipping one zero to 1.*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int ans = 0;
        int count = 0;
        int left = 0;
        int right = 0;
        
        while(right<n){
            if(arr[right] == 1){
                ans = max(ans , right-left+1);
                right++;
            }else{
                count++;
                
                
                while(count>m){
                    
                    if(arr[left] == 0){
                        count--;
                    }
                    left++;
                }
                ans = max(ans , right-left+1);
                right++;
            }
        }
        return ans;
    }  
};

int main() {
    
    int n, i, m;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    Solution ob;
    auto ans = ob.findZeroes(arr, n, m);
    cout << ans << "\n";

    return 0;
}
