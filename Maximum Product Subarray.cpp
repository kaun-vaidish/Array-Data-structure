/*
Given an array Arr[] that contains N integers (may be positive, negative or zero).
 Find the product of the maximum product subarray
*/
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    
	long long maxProduct(vector<int> arr, int n) {
	    long long mx = arr[0];
	    long long ma = arr[0]; 
	    long long mi = arr[0];
	    
	    for(int i = 1 ; i< n ; i++){
	        if(arr[i]<0){
	            swap(ma,mi);
	        }
	        ma = max(static_cast<long long>(arr[i]),ma*arr[i]);
	        mi = min(static_cast<long long>(arr[i]) , mi*arr[i] );
	        mx = max(ma,mx);
	    }
	    
	    
	    return mx;
	}
};

int main() {
    
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    
}


/*
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
*/
