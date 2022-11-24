class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            s.insert(nums[i]);
        }
        int k = s.size();
        int count = 0;
        for (auto x : s) {
            nums[count] = x;
            count++;
        }
        return k;
    }
};
