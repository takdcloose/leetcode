#include <iostream>
#include <vector>
#include <bits/stdc++.h>
class Solution {
public:
    int twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0 ;i<nums.length(); i++){
            for(int j=i+1 ;nums.length();i++){
                if (nums[i]+nums[j] == target){
                    return new int[]{i,j};
                }
            }
        } 
    }
};