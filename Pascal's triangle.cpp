/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int rows = 2;
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows == 1){
            return ans;
        }
        ans.push_back({1,1});
        if(numRows == 2){
            return ans;
        }

        while(rows < numRows){
            vector<int>temp;
            temp.push_back(1);
            vector<int>prev = ans[rows-1];
            int i = 0;
            while(i+1<prev.size()){
                temp.push_back(prev[i]+prev[i+1]);
                i++;
            }
            temp.push_back(1);
            ans.push_back(temp);
            rows++;
        }

        return ans;
    }
};


