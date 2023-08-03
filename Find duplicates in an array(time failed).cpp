//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        map<int,int>mp;
        vector<int> count;
        for(int i = 0 ; i< n ; i++){
            mp[arr[i]]++;
        }
        // map<int,int>::iterator p = mp.begin();
        // while(p!=mp.end()){
            // if(p->second > 1){
            //     count.push_back(p->first);
            // }
            // p++;
        // }
        for(map<int,int>::iterator p=mp.begin(); p!=mp.end(); p++){
            if(p->second > 1){
                count.push_back(p->first);
            }
        }
        if(count.size()==0){
            count.push_back(-1);
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    
}

/*
N = 5
a[] = {2,3,1,2,3}
Output: 2 3
*/