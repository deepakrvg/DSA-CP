class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int j;
            if (arr[i] == 0) {
                j = n - 1;
                while (j > i) {
                    arr[j] = arr[j - 1];
                    j--;
                }
                arr[j] = 0;
                i++;
            }
        }
    }
};
