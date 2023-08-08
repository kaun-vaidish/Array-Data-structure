/*
Find the first non-repeating element in a given array arr of N integers.
Note: Array consists of only positive and negative integers and not zero.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 


class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int,int>mp;
        
        for(int i = 0 ; i< n ; i++){
            mp[arr[i]]++;
        }
        
        for(int i = 0 ; i< n ; i++){
            if(mp[arr[i]] == 1){
                return arr[i];
            }
        }
        return 0;
        
    } 
  
};


//{ Driver Code Starts.

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Solution ob;
    cout<<ob.firstNonRepeating(arr,n)<<endl;
    
}


/*
Input : 
int n = 5
arr[] = {-1, 2, -1, 3, 2}
Output : 3
*/