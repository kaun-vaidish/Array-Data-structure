/*
Given an unsorted array Arr of N positive and negative numbers.
 Your task is to create an array of alternate positive and negative numbers without
  changing the relative order of positive and negative numbers.
Note: Array should start with a positive number and 0 (zero) should be considered a positive element.
*/
#include <bits/stdc++.h>

using namespace std;


class Solution{
public:

	void rearrange(int arr[], int n) {
	    int positive = 0;
	    int negative = 0;
	    
	    for(int i = 0 ; i< n ; i++){
	        if(arr[i]<0){
	            negative++;
	        }else{
	            positive++;
	        }
	    }
	    
	    vector<int>positives;
	    vector<int>negatives;
	    
	    for(int i = 0 ; i< n ; i++){
	        if(arr[i]>-1){
	            positives.push_back(arr[i]);
	        }else{
	            negatives.push_back(arr[i]);
	        }
	    }
	    
	    int po = 0;
	    int ne = 0;
	    
	    if(positive>negative){
    	    for(int i = 0 ; i< 2*negative;i++){
    	        if(i%2==0){
    	            arr[i] = positives[po];
    	            po++;
    	        }else{
    	            arr[i] = negatives[ne];
    	            ne++;
    	        }
    	    }
    	    for(int i = 2*negative ; i<n ; i++){
    	        arr[i] = positives[po];
    	        po++;
    	    }
	    }
	    else{
	        for(int i = 0 ; i< 2*positive;i++){
    	        if(i%2==0){
    	            arr[i] = positives[po];
    	            po++;
    	        }else{
    	            arr[i] = negatives[ne];
    	            ne++;
    	        }
    	    }
    	    for(int i = 2*positive ; i<n ; i++){
    	        arr[i] = negatives[ne];
    	        ne++;
    	    }
	    }
	}
};


int main() {
    
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    
}


/*
Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
*/