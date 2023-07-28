#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    string temp = str;
    int n = str.length();
    for(int i =0;i<n ;i++){
        str[i] = temp[n-1-i];        
    }
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

/*
Input:
t=1
s = Geeks
Output: skeeG
*/

