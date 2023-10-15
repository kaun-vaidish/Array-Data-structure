/*
Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    int NumberofElementsInIntersection(int arr1[], int arr2[], int n, int m) {
        unordered_map<int,int>mp;
        int count = 0;
    
        for(int i = 0 ; i < n ; i++){
            mp[arr1[i]]++;
        }
        for(int i = 0 ; i < m ; i++){
            if(mp[arr2[i]]>0){
               count++; 
               mp[arr2[i]] = 0;
            }
        }
        return count;
    
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) cin >> b[i];
    Solution ob;
    cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;

    return 0;
}
