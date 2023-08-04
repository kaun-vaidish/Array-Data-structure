/*
Given an array(0-based indexing), you have to find the max sum of i*A[i]
 where A[i] is the element at index i in the array.
  The only operation allowed is to rotate(clock-wise or counter clock-wise) 
  the array any number of times.
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
      
}


void rotate(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        int temp = arr[0];
        arr[i] = arr[i+1];
        arr[n] = arr[i];
    }
}

int max_sum(int A[],int N)
{
    int mx = INT_MIN;
    int sum = 0;
    int cur = 0;
           
    for(int i = 0 ; i< N ; i++){
        sum += A[i];
        cur += i*A[i];
        mx = max(mx,cur);
    }
    
    for(int i = 0 ; i< N ; i++){
        cur = cur + sum - N*A[N-i-1];
        
        mx = max(mx,cur);
    }
       
    return mx;
}


/*
N = 4
A[] = {8,3,1,2}
Output: 29
*/