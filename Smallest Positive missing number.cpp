/*
You are given an array arr[] of N integers.
 The task is to find the smallest positive number missing from the array.
Note: Positive number starts from 1

*/
#include<bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        set<int>s;
        for(int i = 0 ; i< n ;i++){
            s.insert(arr[i]);
        }
        int k=0;
        
        std::set<int>::iterator it;
        for (it = s.begin(); it != s.end(); ++it) {
            if(*it>0){
                if(*it == k+1){
                    k = *it;
                }else{
                    return k+1;
                }
            }
        }
        return k+1;
        
    } 
};

int missingNumber(int arr[], int n);

int main() { 
    
    
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    
} 


/*
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing 
number is 2
*/