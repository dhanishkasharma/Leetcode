class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left=0;
        int c=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }


            while(c>k){
                if(nums[left]==0){
                    c--;
                }
                left++;
            }

            maxi=max(maxi,i-left+1);


        }
        return maxi;
        
    }
};