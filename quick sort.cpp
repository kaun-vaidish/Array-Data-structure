#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 int partition (int arr[], int low, int high)
    {
        int pivot = low;
        int i = low;
        int j = high;
        
        while(i<j){
            while(i<high && arr[i]<arr[pivot]){
                i++;
            }
            while(j>low && arr[j]>=arr[pivot]){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        
        swap(arr[pivot] , arr[j]);
        return j;
    }


    
    //Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
	// code here
	if(low<high){
		int pa = partition(arr,low,high);
		quickSort(arr,low,pa-1);
		quickSort(arr,pa+1,high);
	}
}

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	quickSort(arr, 0, N - 1);
	cout << "Sorted array: " << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}
