class Solution {
public:
    int subarraySum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
             nums[i]+=nums[i-1];
        }

        int sum=0;

        for(int i=0;i<nums.size();i++){
            int start=0;
            if(i==0){
             start=max(0,i-nums[i]);
            }

            else{
               int c=nums[i]-nums[i-1];
                start=max(0,i-c);
            }

            if(start==0) {
                sum+=nums[i];
            }
            else{
                sum+=nums[i]-nums[start-1];
            }
        }

        return sum;
        
    }
};