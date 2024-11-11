// https://leetcode.com/problems/valid-anagram/ - 11/11/2024
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for (int i=0; i<s.length(); i++) {
            s_map[s[i]] = s_map[s[i]] + 1;
            t_map[t[i]] = t_map[t[i]] + 1;
        }

        if (s_map.size() != t_map.size())
            return false;

        for (auto it = s_map.begin(); it != s_map.end(); it++) {
            if (s_map[it->first] != t_map[it->first])
                return false;
        }

//        Trying to iterate through map
//        for (int i=1; i<s_map.size()+1; i++) {
//            if (s_map.at(i) != t_map.at(i))
//                return false;
//        }

        return true;
    }
};

// input s = "anagram", t = "nagaram"
// output = true
// 
// input s = "rat", t = "car"
// output = false
//
// *What if "ratt" vs "rat"? False?
// 
// 1. sort string, then iterate through string and when mismatch, then return false for invalid anagram
//     - sort O(logN) + iterate O(N) = O(N)
// 2. put string into unordered map, then compare counts and if any mismatch then return false
//     - u_map O(N) + compare counts O(N) = O(N)
// 
// - Learn to implement sort from scratch, in this case it's sort string
// - Trying 2. first as it should be easier
