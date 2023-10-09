#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid+1;
    int temp[r-l+1];
    int k = 0;
    
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }
    
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    
    while(j<=r){
        temp[k++] = arr[j++];
    }
    
    k=0;
    
    for(int x = l ; x < r+1 ; x++){
        arr[x] = temp[k++];
    }
    
}

void mergeSort(int arr[], int l, int r)
{
    
    if(l>=r){
        return;
    }
    
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}


int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	mergeSort(arr, 0, N - 1);
	cout << "Sorted array: " << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}