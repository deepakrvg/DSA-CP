class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> dp;
        int n = nums.size();
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0 || i == (n - 1)) {
                if (nums[i] == 1) 
                    len++;
                dp.push_back(len);
                len = 0;
            }
            else {
                len++;
            }
        }
        sort(dp.begin(), dp.end(), greater<int>());
        return dp[0];
    }
};
