/*
Imagine you have a special keyboard with the following keys: 

Key 1:  Prints 'A' on screen
Key 2: (Ctrl-A): Select screen
Key 3: (Ctrl-C): Copy selection to buffer
Key 4: (Ctrl-V): Print buffer on screen appending it after what has already been printed.

Find maximum numbers of A's that can be produced by pressing keys on the special keyboard N times. 

Example 1:
Input: N = 3
Output: 3
Explanation: Press key 1 three times.

Example 2:
Input: N = 7
Output: 9
Explanation: The best key sequence is 
key 1, key 1, key 1, key 2, key 3,
key4, key 4.*/


#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution{
public:
    long long int optimalKeys(int n){
        
        if(n<=6){
            return n;
        }
        
        vector<int> dp(n+1,0); 
        
        for(int i = 0 ; i<= 6 ; i++){
            dp[i] = i;
        }
        
        for(int i = 7 ; i<n+1 ; i++){
            for(int j = i-3 ; j >0 ; j--){
                dp[i] = max(dp[i],dp[j]*dp[i-j-1]);
            }
        }
        return dp[n];
        
    }
};

int main(){
    int N;
    cin>>N;
    
    Solution ob;
    cout<<ob.optimalKeys(N)<<"\n";

    return 0;
}
