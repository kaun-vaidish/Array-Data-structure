/*
Given an array arr[] of n non-negative integers. 
The task is to find the maximum of j - i (i<=j) subjected to the constraint of arr[i] <= arr[j].

Example 1:

Input:
n = 9
arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output: 
6
Explanation: 
In the given array arr[1] < arr[7]  satisfying 
the required condition (arr[i] <= arr[j])  thus 
giving the maximum difference of j - i which is
6(7-1).*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int left[n];
        int right[n];
        int maxr = INT_MIN;
        int minl = INT_MAX;
        
        for(int i = 0 ; i < n ; i++){
           minl = min(minl , arr[i]); 
           left[i] = minl;
        }
        
        for(int i = n-1 ; i >=0 ; i--){
            maxr = max(maxr , arr[i]);
            right[i] = maxr;
        }
        
        int i = 0;
        int j = 0;
        int ans = 0;
        
        while(i<n&&j<n){
            if(right[j]>=left[i]){
                ans=max(ans,j-i);
                j++;
            }else{
                i++;
            }
        }
        
        return ans;
    }

};


int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution ob;
    auto ans = ob.maxIndexDiff(a, n);
    cout << ans << "\n";

    return 0;
}
