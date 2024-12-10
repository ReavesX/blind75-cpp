// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // loop through elements in nums
            // i starts 0
            // j starts 1
        // if nums i == nums j -> duplicate 
            //if duplicate_count > 0: return True
            //else false 
        for (int i = 0; i < nums.size(); i++){
            for (int j = (i+1); j < nums.size(); j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
