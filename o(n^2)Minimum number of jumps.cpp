/*
Given an array of N integers arr[] where each element represents the maximum length of the jump 
that can be made forward from that element. 
This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
Find the minimum number of jumps to reach the end of the array 
(starting from the first element). If an element is 0, then you cannot move through that element
*/
#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int jumps  = 0;
        int position = 0;
        if(arr[position] == 0){
                return -1;
        }
        while(position<n){
            int tempMax = 0;
            for(int i = 0 ; i<arr[position];i++){
                tempMax = max(tempMax,arr[position+i]);
            }
            position+=tempMax;
            jumps++;
            if(position>=n-1){
                return jumps;
            }
        }
    }
};


int main()
{
    
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    
}

/*
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3
*/