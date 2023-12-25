/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.*/

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxSum = arr[0];
        int n = arr.size();
        int i = 0;
        int j = 1;

        int sum = arr[0];
        while(j<n){
            if(sum<=0){
                sum = arr[j];
                i = j;
                j++;
                if(sum>maxSum)
                maxSum = sum;
            }else{
                sum += arr[j];
                j++;
                if(sum>maxSum)
                maxSum = sum;
            }
        }
        return maxSum;
    }

};