/*
You are given an array a, of n elements. Find the minimum index based distance between two distinct elements of the array, x and y. Return -1, if either x or y does not exist in the array.

Example 1:

Input:
N = 4
A[] = {1,2,3,2}
x = 1, y = 2
Output: 1
Explanation: x = 1 and y = 2. There are
two distances between x and y, which are
1 and 3 out of which the least is 1.*/


#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int prevx = INT_MIN;
        int prevy = INT_MIN;
        int res = INT_MAX;
        int flag1 = 0;
        int flag2 = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == x){
                prevx = i;
                flag1 =1;
            }
            if(arr[i] == y){
                prevy = i;
                flag2 =1;
            }
            if(flag1!=0 && flag2!=0){
                res = min(res,abs(prevy-prevx));
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};

int main() {
   
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int x, y;
    cin >> x >> y;
    Solution obj;
    cout << obj.minDist(a, n, x, y) << endl;

    return 0;
}

