class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i <= r; i++) {
            pq.push(arr[i]);
        }
        int i = 1;
        int ans = 0;
        while (!pq.empty()) {
            if (i == k) {
                ans = pq.top();
                break;
            }
            pq.pop();
            i++;
        }
        return ans;
    }
};



/* Solution 2:- 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr + l, arr + r + 1);
        return arr[k - 1];
    }
};
*/
