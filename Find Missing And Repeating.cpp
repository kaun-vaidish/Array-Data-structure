/*
Given an unsorted array Arr of size N of positive integers.
 One number 'A' from set {1, 2,....,N} is missing and 
 one number 'B' occurs twice in array. 
 Find these two numbers.
 
 Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.*/


#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int repeated,missing;
        vector<int> v(n+1,-1);
        for(int i = 0 ; i< n ; i++){
            if(v[arr[i]]==-1){
                v[arr[i]] = arr[i];
            }else{
                repeated = arr[i];
            }
        }
        
        for(int i= 1 ; i<n+1 ; i++){
            if(v[i]==-1){
                missing = i;
            }
        }
        return{repeated,missing};
    }
};
int main() {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution ob;
    auto ans = ob.findTwoElement(a, n);
    cout << ans[0] << " " << ans[1] << "\n";
    return 0;
}
