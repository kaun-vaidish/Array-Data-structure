/*
Given an unsorted array of size N. Find the first element in array such that all of its 
left elements are smaller and all right elements to it are greater than it.
Note: Left and right side elements can be equal to required element.
And extreme elements cannot be required element. 

Example 1:

Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.*/


#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) cin >> a[i];
    cout << findElement(a, n) << endl;

    return 0;
}


int findElement(int arr[], int n) {
    int left[n];
    int right[n];
    int maxl = arr[0];
    int minr = arr[n-1];
    
    for(int i = 1 ; i < n ; i++){
        left[i] = maxl;
        maxl = max(maxl , arr[i]);
        
    }
    
    for(int i = n-2 ; i>=0 ; i--){
        right[i] = minr;
        minr = min(minr , arr[i]);
        
    }
    
    for(int i = 1 ; i < n-1 ; i++ ){
        if(left[i]<= arr[i] && right[i]>= arr[i]){
            return arr[i];
        }
    }
    
    return -1;
}