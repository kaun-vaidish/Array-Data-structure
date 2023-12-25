/*A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]*/


class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index = -1;
        int n = arr.size();

        for(int i = n-2 ; i >=0 ; i--){
            if(arr[i]<arr[i+1]){
                index = i;
                break;
            }
        }

        if(index == -1){
            for(int i = 0 ; i < n/2 ; i++){
                int temp = arr[i];
                arr[i] = arr[n-i-1];
                arr[n-i-1] = temp;
            }
            return ;
        }

        int req = INT_MAX;
        int i = index+1; 
        int index2 ;
        while(i<n){
            if(arr[i]<=req && arr[i]>arr[index]){
                req = arr[i];
                index2 = i;
            }
            i++;
        }

        int temp = arr[index];
        arr[index]=arr[index2];
        arr[index2]=temp;

        int l = index+1;
        int r = n-1;

        while(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }

    }
};