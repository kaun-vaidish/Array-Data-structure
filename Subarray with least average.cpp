/*
Given an array of size n, Find the subarray with least average of size k.
Example 1:

Input: n = 3 ,nums = [30, 20, 10], k = 1
Output: 3
Explanation: Subarrays of length 1 are
{30}, {20}, {10}. {10} has the least 
average.

Example 2:

Input: n = 3 , nums = [30, 20, 10], k = 2
Output: 2
Explanation: Subarrays of length 2 are
{30, 20}, {20, 10}. {20, 10} has the least 
average.*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int least_average(vector<int>arr, int k)
	{
	    int n = arr.size();
	    
	    int sum = 0;
	    for(int i = 0 ; i< k ; i++){
	        sum += arr[i]; 
	    }
	    float avg = float(sum)/float(k);
	    
	    int idx = 1;
	    int ans = 1;
	    
	    for (int i = k ; i< n ; i++){
	        sum = sum + arr[i] - arr[i-k];
	        float temp = float(sum)/float(k);
	        idx++;
	        if(temp<avg){
	            avg = temp;
	            ans = idx;;
	        }
	    }	
	    
	    return ans;
	    
	}  
};


int main(){
	
    int n, k;
    cin >> n >> k;
    vector<int>nums(n);
    for(int i = 0; i < n; i++)cin >> nums[i];
    Solution ob;
    int ans = ob.least_average(nums, k);
    cout << ans << "\n";

	return 0;
}
