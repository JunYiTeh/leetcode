// https://leetcode.com/problems/two-sum/description - 11/11/2024
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u_map;

        for (int i=0; i<nums.size(); i++) {
            int target_diff = target - nums[i];
            if (u_map.count(target_diff) != 0)
                if (i != u_map[target_diff])
                    return {u_map[target_diff], i};
            u_map[nums[i]] = i;
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
// 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> u_map;
//         u_map[nums[0]] = 0;

//         for (int i=1; i<nums.size(); i++) {
//             int target_diff = target - nums[i];
//             if ((i != u_map[target_diff]) && (nums[i] == target_diff))
//                 return {u_map[target_diff], i};
//             u_map[nums[i]] = i;
//         }

//         return {0,0};
//     }
// };
//
// 2. Hashmap method from NeetCode
// - Have hashmap with key=nums value, value=index
// - Iterate through vector to find the difference of the target, when found, return pair
