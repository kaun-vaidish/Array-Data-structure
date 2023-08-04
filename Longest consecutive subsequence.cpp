/*
Given an array of positive integers.
 Find the length of the longest sub-sequence such that elements in the subsequence are
  consecutive integers, the consecutive numbers can be in any order.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    // void swap(int &i , int &j){
    //     int temp = i;
    //     i = j ;
    //     j = temp;
    // }
  
    // int partition(int arr[],int l , int h){
    //     int pivot = arr[h];
    //     int i = l-1;
    //     for(int j = i+1 ; j<h ; j++){
    //         if(arr[j]<pivot){
    //             i++;
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    //     swap(arr[i+1],arr[h]);
    //     return i+1;
        
    // }
    
    // void quicksort(int arr[],int l , int h){
    //     if(l<h){
    //         int pi = partition(arr, l ,  h);
            
    //         quicksort( arr, l ,  pi-1);
    //         quicksort( arr, pi+1 ,  h);
    //     }
    // }
    
    int findLongestConseqSubseq(int arr[], int N)
    {
        //quicksort( arr, 0 , N-1);
        
        set<int>s;
        
        for(int i = 0 ; i< N ; i++){
            s.insert(arr[i]);
        }
        
        int max = 1;
        int cur = 1;
        
        int temp[N];
        int i = 0;
        
        set<int>::iterator it = s.begin();
        while(it!=s.end()){
            temp[i] = *it;
            i++;
            it++;
        }
        
        
        for(int i = 1 ; i< N ; i++){
            if(temp[i]==temp[i-1]+1){
                cur++;
            }else{
                cur=1;
            }
            if(cur>max){
                max = cur;
            }
        }
        return max;
    }
};

int main()
{
 int  t,n,i,a[100001];
 
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
}
    
/*
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
*/