
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int temp[n];
        int positive = 0;
        int negative = 0;
        
        for(int i = 0 ; i< n ; i++){
            if(arr[i]>0){
                positive++;
            }else{
                negative++;
            }
        }
        
        int po = 0 ;
        int ne = positive;
        
        for(int i = 0 ; i<n ; i++){
            if(arr[i]>0){
                temp[po]=arr[i];
                po++;
            }else{
                temp[ne]=arr[i];
                ne++;
            }
        }
        
        for(int i = 0 ; i<n ; i++){
            arr[i] = temp[i];
        }
         
    }
};


int main() {
	
	
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	
}

/*
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
*/