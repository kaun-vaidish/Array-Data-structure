/*
Given an array of integers and a number K.
 Find the count of distinct elements in every window of size K in the array.

Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        vector<int>ans;
        map<int,int>mp;
        int l = 0;
        int r = k-1;
        
        for(int i = 0 ; i< k ; i++){
            mp[arr[i]]++;
        }
        int count  = mp.size();
        ans.push_back(count);
        
        
        while(r<n-1){
            
            if(mp[arr[l]]==1){
                count--;
                mp[arr[l]]--;
            }
            else{
                mp[arr[l]]--;
            }
            l++;
            r++;
            if(mp[arr[r]]>0){
                mp[arr[r]]++;
            }else{
                mp[arr[r]]++;
                count++;
            }
            
        ans.push_back(count);    
            
        }
        
        return ans;
    }
};

int main()
{
    

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    Solution obj;
    vector <int> result = obj.countDistinct(a, n, k);
    for (int i : result) 
        cout << i << " ";
    cout << endl;

    return 0;
}
