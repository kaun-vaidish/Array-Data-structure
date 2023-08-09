/*
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
Task is to check whether a2[] is a subset of a1[] or not. 
Both the arrays can be sorted or unsorted.
 There can be duplicate elementsGiven two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
  Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted.
 There can be duplicate elements*/
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];

    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a2[i];
    }

    cout << isSubset(a1, a2, n, m) << endl;

    return 0;
}

string isSubset(int a1[], int a2[], int n, int m) {
    map<int , int>mp;
    for(int i = 0 ; i < n ; i++){
        mp[a1[i]]++;
    }
    
    for(int i = 0 ; i<m ; i++){
        if(mp.find(a2[i]) != mp.end()){
            if(mp[a2[i]] <= 1){
                mp.erase(a2[i]);
            }else{
                mp[a2[i]]--;
            }
        }else{
            string s = "No";
            return s;
        }
    }
    
    string s = "Yes";
    return s;
}

/*
n = 8
m = 5
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
Output:
Yes*/