/*
Given an array of non-negative integers, and a value sum, 
determine if there is a subset of the given set with sum equal to given sum. 

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.
*/

#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
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
        

        for(int i = 0;i<n+1;i++){
            for(int j =0 ; j<sum+1;j++){
               cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }    
        //return t[n][sum];
        
    }
};

int main() 
{ 
    int N, sum;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cin >> sum;
    
    Solution ob;
    cout << ob.isSubsetSum(arr, sum) << endl;

    return 0; 
} 

