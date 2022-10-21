class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int ans = nums.size() + 1;
        int sum = 0;
        bool flag = false;
        while (r < nums.size()) {
            sum += nums[r];
            if (sum >= target) {
                ans = min(ans, r - l + 1);
                flag = true;
            }
            while (sum >= target && l <= r) {
                sum -= nums[l];
                ans = min(ans, r - l + 1);
                l++;
            }
            r++;
        }
        if (!flag) ans = 0;
        return ans;
    }
};
