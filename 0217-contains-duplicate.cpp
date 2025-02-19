// https://leetcode.com/problems/contains-duplicate/ - 09/11/2024
class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> list;
        
        for (int i=0; i<nums.size(); i++) {
            list[nums[i]] = list[nums[i]] + 1;
            if (list[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};

/*
given int array nums, return true if value appears at least twice in array, and return false if every element distinct
nums = [1, 2, 3, 1]
list = [1, 2, 3]
returns true

nums = [1, 2, 3, 3, 4]
returns true

i = 0, current element = 1

*/

// Works but time limit exceeded
/*
class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<nums.size(); j++) {
                if (i != j && nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
*/
