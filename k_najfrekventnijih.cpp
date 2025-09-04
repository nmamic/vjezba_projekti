// Given an integer array nums and an integer k, return the k most frequent elements within the array.

// The test cases are generated such that the answer is always unique.

// You may return the output in any order.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> buckets[nums.size()+1];
        std::unordered_map<int,int> pojavljivanja;
        for(int broj : nums){
            pojavljivanja[broj]++;
        }

        for(auto brojevi : pojavljivanja){
            buckets[brojevi.second].push_back(brojevi.first);
        }

        vector<int> k_najcescih;
        for(int i=nums.size();i>0;--i){
            for(int svi_iste_frekvencije : buckets[i]){
                k_najcescih.push_back(svi_iste_frekvencije);
                if(k_najcescih.size()==k){
                    return k_najcescih;
                }
            }
        }
    }
};
