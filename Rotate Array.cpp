/*
Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D 
steps, where D is a positive integer. 

Example 1:
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // vector<int>vct(d);
        // for(int i = 0 ; i< n-d ; i++){
        //     vct[i] = arr[i];
        // }
        // for(int i = 0 ; i < n-d ; i++){
        //     arr[i] = arr[i+d];
        // }
        // for(int i = n-d ; i<n ; i++){
        //     arr[i] = vct[i-n+d];
        // }
        
        d = d%n;
        
        reverse(arr , arr+d);
        reverse(arr+d, arr+n);
        reverse(arr , arr+n);
    }
};

int main() {
	
    int n, d;
    
    //input n and d
    cin >> n >> d;
    
    int arr[n];
    
    //inserting elements in the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution ob;
    //calling rotateArr() function
    ob.rotateArr(arr, d,n);
    
    //printing the elements of the array
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

	return 0;
}
