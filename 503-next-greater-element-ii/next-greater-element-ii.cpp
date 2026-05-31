class Solution {
public:
    // 1 2 3 4 3 1 2 3 4 3
    // 2 13 12 1 11 2 13 12 1 11
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;

        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }

        for(int i=0;i<n;i++){
            bool found=false;
            for(int k=i+1;k<2*n;k++){
                if(nums[k]>nums[i]){
                    ans.push_back(nums[k]);
                    found=true;
                    break;

                }


            }
            if(found==false) ans.push_back(-1);
        }

        return ans;

        
    }
};