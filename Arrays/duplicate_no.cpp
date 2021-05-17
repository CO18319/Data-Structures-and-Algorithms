#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // if there are only two numbers in the array
        if(nums.size() == 2)      
            return nums[0];
        
        // sort the array
        sort(nums.begin(), nums.end());
        
        // check adjacent numbers
        int i;
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == nums[i+1])
                break;
        }
        return nums[i];
    }

    /*
        Time complexity - O(nlgn)
        Space complexity - O(1)
    */
};