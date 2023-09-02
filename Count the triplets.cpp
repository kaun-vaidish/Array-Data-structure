/*
Given an array of distinct integers. 
The task is to count all the triplets such that sum of two elements equals the third element.
Example 1:

Input: 
N = 4 
arr[] = {1, 5, 3, 2}
Output: 2 
Explanation: There are 2 triplets:
 1 + 2 = 3 and 3 +2 = 5
 */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>mp;
	    int count=0;
	    for(int i = 0 ; i< n ; i++){
	        mp[arr[i]]++;
	    }
	    
	    for(int i = 0 ; i< n ; i++){
	        for( int j = i+1 ; j < n ; j++){
	            if(mp[arr[i]+arr[j]]){
	                count++;
	            }
	        }
	    }
	    return count ;
	}
};

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution ob;
    cout << ob.countTriplet(arr, n) << "\n";

    return 0;
}
