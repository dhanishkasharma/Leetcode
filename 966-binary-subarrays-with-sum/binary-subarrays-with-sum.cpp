class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int,int> mpp;
        mpp[0]=1;

        int n=nums.size();
        int sum=0;
        int counter=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(mpp.find(sum-goal)!=mpp.end()){
                counter+=mpp[sum-goal];

            }

            mpp[sum]++;

        }
        return counter;
        
    }
};