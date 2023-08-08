/*
Given a boolean 2D array of n x m dimensions where each row is sorted.
 Find the 0-based index of the first row that has the maximum number of 1's.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    for(int j = 0 ; j < m ; j++){
	        for(int i = 0 ; i< n ; i++){
	            if(arr[i][j] == 1){
	                return i;
	            }
	        }
	    }
	    return -1;
	}

};

//{ Driver Code Starts.
int main() {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    
    return 0;
}

/*
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
*/