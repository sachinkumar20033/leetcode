class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int n = nums.size();

        int current = 2;
        int ans = 2;

        for (int i = 2; i < n; i++) {

            if (nums[i] == nums[i - 1] + nums[i - 2]) {
                current++;
            }
            else {
                current = 2;
            }

            ans = max(ans, current);
        }

        return ans;
    }
};