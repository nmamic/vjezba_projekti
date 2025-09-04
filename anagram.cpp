//Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

//An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

class Solution {
public:
    bool isAnagram(string s, string t) {
       std::unordered_map<char,int> s_chars,t_chars;
       if(s.size()!=t.size()) return false;
       for(int i=0;i<s.size();++i){
            s_chars[s[i]]++;
       }
       for(int i=0;i<t.size();++i){
            t_chars[t[i]]++;
       }
       for(int i=0;i<s.size();++i){
            if(s_chars[s[i]]!=t_chars[s[i]]) return false;
       }
       for(int i=0;i<t.size();++i){
            if(s_chars[t[i]]!=t_chars[t[i]]) return false;
       }
    return true; 
    }
};