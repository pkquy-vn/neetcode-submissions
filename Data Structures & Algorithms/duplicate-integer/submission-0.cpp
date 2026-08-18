class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash_table;
        for (int n : nums) {
            hash_table[n]++;

            if (hash_table[n] > 1) {
                return true;
            }
        }
        return false;
    }
};