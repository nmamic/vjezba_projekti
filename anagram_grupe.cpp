// Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<string>> hash_crap;
        for(int i=0;i<strs.size();++i){
            int num_letters[26]={};
            for(int j=0;j<strs[i].size();++j){
                num_letters[(int)(strs[i][j]-'a')]++;
            }
            string rijecica;
            for(int j=0;j<26;++j){
                rijecica+=','+to_string(num_letters[j]);
            }
            hash_crap[rijecica].push_back(strs[i]);
        }
        std::vector<std::vector<std::string>> gotovo ={};
        for(auto popis_istih : hash_crap){
            gotovo.push_back(popis_istih.second);
        }
        return gotovo;
    }
};


