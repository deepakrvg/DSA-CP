class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int l = 0, r = n - 1;
        int ans = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] >= x) {
                ans = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        if (ans != -1 && arr[ans] != x) {
            ans = -1;
        }
        
        vector<int> ANS(2);
        ANS[0] = ans;
        
        l = 0, r = n - 1;
        ans = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] <= x) {
                ans = m;
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        if (ans != -1 && arr[ans] != x) {
            ans = -1;
        }
        ANS[1] = ans;
        
        return ANS;
    }
};
