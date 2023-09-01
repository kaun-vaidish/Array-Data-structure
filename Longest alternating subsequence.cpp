/*
A sequence {x1, x2, .. xn} is alternating sequence if its elements satisfy one of the following relations :
x1 < x2 > x3 < x4 > x5..... or  x1 >x2 < x3 > x4 < x5.....
Your task is to find the longest such sequence.
Input: 
n = 10
nums = {1,17,5,10,13,15,10,5,16,8}
Output: 7
Explanation: There are several subsequences
that achieve this length. 
One is {1,17,10,13,10,16,8}.*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&arr){
		    int n = arr.size();
		    if(n<3){
		        return n;
		    }
		    int up = 1;
		    int down = 1;
		    for(int i = 1 ; i< n ; i++){
		        if(arr[i]>arr[i-1]){
		            up = down+1;
		            
		        }
		        
		        if(arr[i]<arr[i-1]){
		            down = up+1;
		            
		        }
		    }
		    
		    return max(up,down);
		}

};

int main(){

    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    Solution obj;
    int ans = obj.AlternatingaMaxLength(nums);
    cout << ans << "\n";
	return 0;
}
