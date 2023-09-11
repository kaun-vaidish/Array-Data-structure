/*
Given a sorted array containing only 0s and 1s, find the transition point. 


Example 1:

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int n;
    cin >> n;
    int a[n], i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << transitionPoint(a, n) << endl;

    return 0;
}


int transitionPoint(int arr[], int n) {
   
    if (arr[0]) {
        return 0;
    }
    // Initialise lower and upper bounds
    int lb = 0, ub = n - 1;

    // Perform Binary search
    while (lb <= ub) {
        // Find mid
        int mid = (lb + ub) / 2;

        // update lower_bound if mid contains 0
        if (arr[mid] == 0) lb = mid + 1;

        // If mid contains 1
        else if (arr[mid] == 1) {
            // Check if it is the left most 1
            // Return mid, if yes
            if (arr[mid - 1] == 0) return mid;

            // Else update upper_bound
            ub = mid - 1;
        }
    }
    return -1;
    
}