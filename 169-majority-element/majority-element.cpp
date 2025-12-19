class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0];  int votes=0;

        for(int i=0;i<nums.size();i++){
            if(votes==0){
                votes++;
                maj=nums[i];
            }

            else if(maj==nums[i]){
                votes++;
            }
            else{
                votes--;
            }
        }
        return maj;
        
    }
};