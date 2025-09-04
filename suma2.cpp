// Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

// You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

// Return the answer with the smaller index first.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> vrijed_indeks;
        for(int i=0;i<nums.size();++i){
            int diff=target-nums[i];
            if(vrijed_indeks.count(diff) && vrijed_indeks[diff]!=i)
                return {vrijed_indeks[diff],i};
            else
                vrijed_indeks[nums[i]]=i;
        }
        return {};
    }
};
