/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N.
 Find the missing element.
Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        int required_sum = n*(n+1)/2;
        int sum = 0;
        for(int i = 0 ; i< n-1 ; i++){
            sum += arr[i];
        }
        return required_sum-sum;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> array(n - 1);
    for (int i = 0; i < n - 1; ++i) cin >> array[i];
    Solution obj;
    cout << obj.missingNumber(array, n) << "\n";

    return 0;
}
// } Driver Code Ends