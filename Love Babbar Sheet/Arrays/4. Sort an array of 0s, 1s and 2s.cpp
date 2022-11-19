class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int l = 0, r = n - 1, m = 0;
        while (m <= r) {
            if (a[m] == 0) {
                swap(a[l], a[m]);
                l++;
            }
            if (a[m] == 2) {
                swap(a[m], a[r]);
                r--;
                continue;
            }
            m++;
        }
    }
    
};
