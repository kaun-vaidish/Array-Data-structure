/*
Given an array Arr[] of N integers.
 Find the contiguous sub-array(containing at least one number) 
 which has the maximum sum and return its sum
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:    
    long long maxSubarraySum(int arr[], int n){
        
        long long int cur_sum = 0;
        long long int max_sum = INT_MIN;
        
        for(int i = 0 ; i<n ; i++){
            cur_sum+=arr[i];
            if(cur_sum>max_sum){
                max_sum = cur_sum;
            }
            if(cur_sum<0){
                cur_sum = 0;
            }
        }        
        return max_sum;
    }
};


int main()
{
    int n;
    
    
        
        cin>>n;         
        int a[n];        
        for(int i=0;i<n;i++)
            cin>>a[i]; 

        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    
}


/*
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
*/