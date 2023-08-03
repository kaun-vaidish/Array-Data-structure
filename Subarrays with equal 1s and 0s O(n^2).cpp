/*
Given an array containing 0s and 1s.
Find the number of subarrays having equal number of 0s and 1s.
*/



#include <bits/stdc++.h>
using namespace std;




class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        long long int count = 0;
        
        for(int i = 0 ; i< n ; i++){
            long long int count0 = 0;
            long long int count1 = 0;
            for(int j = i ; j < n ; j++){
                
                if(arr[j]==0){
                    count0++;
                }else{
                    count1++;
                }
                if(count0==count1){
                    count++;
                }
            }
        }
        return count;
    }
};



int main()
{
	
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	
}

/*sample input

n = 7
A[] = {1,0,0,1,0,1,1}

output: 8
*/