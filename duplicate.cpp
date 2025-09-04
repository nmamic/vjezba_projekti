//Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> videni;
        for(auto curr : nums){
            if(videni.count(curr)){
                return true;
            }
            else{
                videni.insert(curr);
            }
        }
        return false;
    }
};