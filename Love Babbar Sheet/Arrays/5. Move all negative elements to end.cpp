class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int temp[n];
        int j = 0;
        
        // copy postive integers in temp array
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                temp[j] = arr[i];
                j++;
            }
        }
        
        // check wether all elements are postive or negative
        if (j == n || j == 0) {
            return;
        }
        
        // copy negative integers in temp array
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp[j] = arr[i];
                j++;
            }
        }
        
        // copy temp to arr
        memcpy(arr, temp, sizeof(temp));
    }
};
