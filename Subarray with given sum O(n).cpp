/*
Given an unsorted array A of size N that contains only positive integers,
 find a continuous sub-array that adds to a given number S 
 and return the left and right index(1-based indexing) of that subarray.
In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // for(int i = 0 ; i < n ; i++ ){
        //     long long sum = arr[i];
        //     if(sum == s){
        //         std::vector<int> myArrayList;
        //         myArrayList.push_back(i+1);
        //         myArrayList.push_back(i+1);
        //         return myArrayList; 
        //     }
        //     int j = i+1;
        //     if(sum < s){
        //         for(j = i+1 ; j<n ; j++){
        //             if(sum<s){
        //                 sum += arr[j];
        //                 if(sum == s){
        //                     std::vector<int> myArrayList;
        //                     myArrayList.push_back(i+1);
        //                     myArrayList.push_back(j+1);
        //                     return myArrayList;
        //                 }
        //             }else
        //             break;
        //         }
        //     }
        // }
        // std::vector<int> myArrayList;
        // myArrayList.push_back(-1);
        // return myArrayList;
        
        vector<int> vct;
        long long sum = arr[0];
        int st = 0;
        int e = 0;
        
        if(s==0){
            for(int i = 0 ; i< n ; i++){
                if(arr[i] == 0){
                    vct.push_back(i+1);
                    vct.push_back(i+1);
                    return vct;
                }
            }
            vct.push_back(-1);
            return vct;
            
        }
        
        while(e<n){
            if(sum<s){
                e++;
                sum+=arr[e];
            }else if(sum==s){
                vct.push_back(st+1);
                vct.push_back(e+1);
                return vct;
            }else{
                sum-=arr[st];
                st++;
            }
        }
        
        vct.push_back(-1);
            return vct;
    
    }
};

int main()
 {
    int n;
    long long s;
    cin>>n>>s;
    vector<int>arr(n);
    // int arr[n];
    const int mx = 1e9;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution ob;
    vector<int>res;
    res = ob.subarraySum(arr, n, s);
    
    for(int i = 0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    

	return 0;
}
