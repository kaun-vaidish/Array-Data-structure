
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        
        unordered_map<int,bool> sumMap;
    	int sum = 0;
    	for (int i = 0 ; i < n ; i++)
    	{
    		sum += arr[i];
    
    		if (sum == 0 || sumMap[sum] == true)
    			return true;
    		sumMap[sum] = true;
    	}
    	return false;
        
    }
};

int main()
{
	
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	
}

/*
Input:
5
4 2 -3 1 6

Output: 
Yes
*/
