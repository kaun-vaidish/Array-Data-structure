/*
Given a sorted array arr[] of distinct integers.
 Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that
 arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]....

 Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5

*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        
        if(arr[0]<arr[1]){
            swap(arr[0],arr[1]);
        }
        
        for(int i = 2 ; i< n-1 ; i++){
            if(i%2==0){
                if(arr[i]<arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
               
                if(arr[i]<arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }    
                
            }else{
                if(arr[i]>arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
               
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                } 
            }
        }
        
    }
};

int main()
{
    int n;
    cin>>n; //input size of array
    vector<int> a(n); //declare vector of size n
    for(int i=0;i<n;i++)
        cin>>a[i]; //input elements of array
    sort(a.begin(),a.end());
    Solution ob;
    ob.convertToWave(n, a);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" "; //print array
        
    cout<<endl;

}


