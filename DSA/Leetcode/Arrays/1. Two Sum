class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v(2);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    v[0] = i;
                    v[1] = j;
                }
            }
        }
        return v;
    }
};
