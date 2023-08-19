//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    
    void reset(int A[],int n ,map<int,int>&mp){
        for(int i = 0 ; i< n ; i++){
        mp[A[i]]++;
        }
    }
    
    bool find3Numbers(int A[], int n, int X)
    {
        map<int,int>mp;
        reset( A, n , mp);
        
        for(int i = 0 ; i< n ; i++){
            mp[i]--;
            for(int j = i+1 ; j< n ; j++){
                mp[j]--;                
                int k = X-A[i]-A[j];
                if(mp[k]>0){
                    cout<<mp[j]<<" haha "<<mp[1];
                    return true;
                }
            }
            reset( A, n , mp);
        }
        
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    
}

/*
4 3
1 2 2 1
*/