class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Correct formula: arr[mid] - (mid + 1)
            int missing = arr[mid] - mid - 1; 
            
            if (missing >= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        // At the end of the loop, low points to the index where 
        // the kth missing number would be inserted.
        return low + k;
    }
};