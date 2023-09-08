/*
You are given a sorted array a of length n. For each i(0<=i<=n-1), 
you have to make all the elements of the array from index 0 till i equal, 
using minimum number of operations. In one operation you either increase or decrease
 the array element by 1.
You have to return a list which contains the minimum number of operations for each i, 
to accomplish the above task.

Note:
1. 0-based indexing.
2. For each index, you need to consider the same array which was given to you at the start.

Example 1:

Input:
N=7
A={1,1,1,7,7,10,19}

Output:
0 0 0 6 12 21 33

Explanation:
Possible operations could be:
{1}->{1}
{1,1}->{1,1}
{1,1,1}->{1,1,1}
{1,1,1,7}->{1,1,1,1}
{1,1,1,7,7}->{1,1,1,1,1}
{1,1,1,7,7,10}->{5,5,5,5,5,5}
{1,1,1,7,7,10,19}->{7,7,7,7,7,7,7}
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        
        vector<int> ans(n);
        ans[0] = 0;
        for(int i = 1 ; i< n ; i++){
            ans[i] = ans[i-1] + a[i] - a[i/2];
        }
        return ans;
    }
};

int main(){
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution obj;
    vector<int> ans=obj.optimalArray(n,a);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}
