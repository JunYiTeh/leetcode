// https://leetcode.com/problems/two-sum/description - 11/11/2024
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<nums.size(); j++) {
                if (i!=j && (nums[i]+nums[j] == target))
                    return {i,j};
            }
        }
        return {0,0};
    }
};

// nums = [2, 7, 11, 15], target = 9
// output = [0, 1]
// 2 + 7 = 9
// 
// - Number may be positive and negative
// - Length > 1
//
// 1. Brute force: add from 0-1, 0-2, 0-n, ..., n-n
// - O(n^2) complexity and O(1) memory
