/*
Given an array arr[] of size N, 
check if it can be partitioned into two parts
 such that the sum of elements in both parts is the same.

 Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explanation: 
The two parts are {1, 5, 5} and {11}.
*/

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:

    bool isSubset(int arr[], int sum,int n){
        
        bool t[n+1][sum+1];
        for(int i = 0 ; i< sum+1 ; i++){
            t[0][i] = false;
        }
        for(int i = 0; i<n+1 ; i++){
            t[i][0] = true;
        }
        
        for(int i = 1;i<n+1;i++){
            for(int j =1 ; j<sum+1;j++){
                
                if(arr[i-1]<=j){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j] ;
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
        
    }
    
    
    int equalPartition(int n, int arr[])
    {
        int addition = 0;
        for(int i = 0 ; i< n ; i++){
            addition+= arr[i];
        }

        if(addition%2!=0){
            return false;
        }else{
            int sum = addition/2;
            return isSubset(arr,sum,n);
        }  
    }
};


int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0;i < N;i++)
        cin>>arr[i];
    
    Solution ob;
    if(ob.equalPartition(N, arr))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
