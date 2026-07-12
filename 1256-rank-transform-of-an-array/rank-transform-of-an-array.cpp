class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};

        // Minimal Change 1: Store elements with their original indices
        vector<pair<int, int>> sorted_arr(n);
        for(int i = 0; i < n; i++) sorted_arr[i] = {arr[i], i};
        
        // Minimal Change 2: Sort the pairs based on values
        sort(sorted_arr.begin(), sorted_arr.end());
        
        vector<int> ans(n);
        int c = 1;

        ans[sorted_arr[0].second] = 1; // Map to original index

        for(int i = 1; i < n; i++) {
            // Minimal Change 3: Changed 'while' to 'if' to avoid infinite loop
            if(sorted_arr[i].first == sorted_arr[i-1].first) {
                ans[sorted_arr[i].second] = ans[sorted_arr[i-1].second];
            } else {
                c++;
                ans[sorted_arr[i].second] = c;
            }
        }
        
        return ans; // Minimal Change 4: Return the result
    }
};