class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int> ans;
        int n=nums.size();
        int p=0;
        int k=0;

        for(int i=0;i<n;i++){
            if(nums[i]==target) p++;
            else if (nums[i]<target) k++;

        }

        int i=0;

        while(p>0){
            ans.push_back(k+i);
            i++;
            p--;
        }


        return ans;
        
    }
};