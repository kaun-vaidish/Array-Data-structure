/*
A sorted(in ascending order) array A[ ] with distinct elements is rotated at some unknown point,
 the task is to find the minimum element in it
*/
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int findMin(int arr[], int n){
        
        for(int i = 1 ; i< n ; i++){
            if(arr[i]<arr[i-1]){
                return arr[i];
            }
        }
        return arr[0];
    }
};



int main()
{
	
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	
}


/*
N = 5
arr[] = {4 ,5 ,1 ,2 ,3}
Output: 1
*/