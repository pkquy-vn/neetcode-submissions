class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int current_sum = nums[left] + nums[right];
            if (current_sum > target) {
                right--;
            }
            else if (current_sum < target) {
                left++;
            }
            else if (current_sum == target) {
                return {left + 1, right + 1};
            }
        }
        return {};
    }
};
