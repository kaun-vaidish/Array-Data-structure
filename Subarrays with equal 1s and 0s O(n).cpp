
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
    
    unordered_map<int,int> mp;
    long long int count =0;
    int sum =0;
    mp[0] = 1;
    
    for(int i = 0 ; i< n ; i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }        
        sum+= arr[i];
        
        if(mp[sum]){
            count+=mp[sum];
            mp[sum]++;
        }else{
            mp[sum]=1;
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