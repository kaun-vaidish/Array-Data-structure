#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int i, total;
        int sum =0;
        total = (n)*(n+1)/2;
        for (i = 0; i < n; i++){
            sum = sum + array[i];
        }
        return (total-sum);
    }
    
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
