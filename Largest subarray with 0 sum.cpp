/*
Given an array having both positive and negative integers. 
The task is to compute the length of the largest subarray with sum 0.

Example 1:
Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.
*/


#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int len = 0;
        int sum[n];
        map<int , int> mp;
        for(int i = 0 ; i< n ; i++){
            
            if(arr[i] == 0 and len == 0)
                len = 1;
            
            
            sum[i] = sum[i-1]+arr[i];
            
            if(sum[i] == 0)
                len = i + 1;
        
            //if(mp[sum[i]]){
            if(mp.find(sum[i]) != mp.end()){
                len = max(len , i-mp[sum[i]]);
            }else{
                mp[sum[i]] = i;
            }
        }
        return len;
    }
};

int main()
{
    int m;
    cin>>m;
    vector<int> array1(m);
    for (int i = 0; i < m; ++i){
        cin>>array1[i];
    }
    Solution ob;
    cout<<ob.maxLen(array1,m)<<endl;
    
    return 0; 
}
