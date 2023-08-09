/*
Given a matrix of size r*c. Traverse the matrix in spiral form
*/
#include <bits/stdc++.h> 
using namespace std; 


class Solution
{   
    public: 
    
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int k = 0;
        int l = 0;
        int m = 0;
        int p = r;
        int q = c;
        
        
        vector<int>v(r*c);
        

        while(k<r*c){
            
            int i = l ;
            int j = m ;
            
            
            for(j = m  ; j < q; j++){
                v[k] = matrix[l][j];
                k++;
                
            }
            l++;
            
            for( i = l ; i < p ; i++ ){
                v[k] = matrix[i][q-1];
                k++;
                
                
            }
            q--;
           
            for (int j = q - 1; j >= m; j--) {
                v[k] = matrix[p - 1][j];
                k++;
            }
            p--;
        
            for (int i = p - 1; i >= l; i--) {
                v[k] = matrix[i][m];
                k++;
            }
            m++;
            
           
        }
        
        return v;
    }
};


int main() {
    
    int r,c;
    cin>>r>>c;
    vector<vector<int> > matrix(r); 

    for(int i=0; i<r; i++)
    {
        matrix[i].assign(c, 0);
        for( int j=0; j<c; j++)
        {
            cin>>matrix[i][j];
        }
    }

    Solution ob;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
    cout<<endl;
    
    return 0;
}

/*
Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/