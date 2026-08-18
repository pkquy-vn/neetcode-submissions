class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        for (auto& str : strs) {
            string n = str;
            sort(n.begin(), n.end());
            anagram[n].push_back(str);
        }
        
        vector<vector<string>> result;
        for (auto& pair : anagram) {
            result.push_back(pair.second);
        }
        return result;
    }
};