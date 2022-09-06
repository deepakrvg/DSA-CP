class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = -10005;
        int sum = -10005;
        for (int i = 0; i < n; ++i) {
            sum = max(nums[i], sum + nums[i]);
            best = max(best, sum);
        }
        return best;
    }
};
