/*
Given a matrix mat[][] of size N x M, 
where every row and column is sorted in increasing order, 
and a number X is given. 
The task is to find whether element X is present in the matrix or not.
Example 1:
Input:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
Output:
0
Explanation:
62 is not present in the
matrix, so output is 0*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int x)
	{
	    int r = 0, c = M - 1;
	    while(r<N && c>=0){
	        if(mat[r][c] == x) return 1;
	        if(mat[r][c] > x) c--;
	        else r++;
	    }
	    return 0;
	}
};

int main ()
{
    int n, m; cin >> n >> m;
    vector <vector <int>> arr (n, vector <int> (m));
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin >> arr[i][j];
            
    int x; cin >> x;
    Solution ob;
    cout << ob.matSearch (arr, n, m, x) << endl;

}
