#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void multiply(int n, vector<int>& number) {
        int carry = 0;
        for (int i = 0; i < number.size(); i++) {
            int num = n * number[i];
            number[i] = (char)((num + carry) % 10);
            carry = (num + carry) / 10;
        }
        while (carry) {
            number.push_back(carry % 10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        vector<int> number;
        number.push_back(1);
        for (int i = 2; i <= N; i++) 
            multiply(i, number);
        reverse(number.begin(), number.end()); 
        return number;
    }
};    



int main() {
    
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
   
}


/*
Input: N = 5
Output: 120
*/