class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;

        for (int i = 0; i < nums.size(); i++) {
            int r = nums[i] % 3;
            ops += min(r, 3 - r);
        }

        return ops;
    }
};
