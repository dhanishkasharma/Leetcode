class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            int final=target-nums[i];

            if(mpp.find(final)!=mpp.end()){
                return {mpp[final],i};
            }
            mpp[nums[i]]=i;
        }

        
        return {-1,-1};
    }
};