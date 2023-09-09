/*
Write a program to Validate an IPv4 Address.
According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation,
 which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, 
 e.g., 172.16.254.1 .
A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255.
Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).
Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes
 will be considered invalid.
Your task is to complete the function isValid which returns 1 if the given IPv4 address is valid else returns 0. The function takes the IPv4 address as the only argument in the form of string.

Example 1:

Input:
IPv4 address = 222.111.111.111
Output: 1
Explanation: Here, the IPv4 address is as
per the criteria mentioned and also all
four decimal numbers lies in the mentioned
range.

Example 2:

Input:
IPv4 address = 5555..555
Output: 0
Explanation: 5555..555 is not a valid
IPv4 address, as the middle two portions
are missing.
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            int n = s.length();
            int dots = 0;
            
            int number = 0;
            int unit = 1;
            int recent = -1 ;
            for(int i =n-1  ; i >=0 ; i--){
                
                if(s[i]=='.'){
                    if(recent == -1){
                        return 0;
                    }
                    if(number<256&&number>=0){
                        unit = 1;
                        number = 0;
                        recent = -1;
                        dots++;
                        continue;
                    }else{
                        return 0;
                    }
                }else{
                    
                    char ch = (s[i]);
                    if(isalpha(s[i])){
                        return 0;
                    }
                    int inum =  ch - '0';
                    if(recent!=-1 && inum ==0){
                        return 0;
                    }
                    if(inum == 0 && recent == 0){
                        return 0;
                    }
                    recent = inum;
                    number=number + inum*unit;
                    unit = unit*10;
                }    
            }
            if(recent == -1 || number > 256 || dots!=3){
                return 0;
            }
            
            return 1;
        }
};


int main() {

    string s;
    cin >> s;
    Solution ob;
    cout << ob.isValid(s) << endl;

    return 0;
}
