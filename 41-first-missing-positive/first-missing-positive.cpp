class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();

        bool ones=false;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ones=true;
            }

            if(nums[i]<=0 || nums[i]>n){
                nums[i]=1;
            }
        }


        if(ones==false) return 1;


        for(int i=0;i<n;i++){
            int k=abs(nums[i])-1;

            if(nums[k]>0){
                nums[k]=-nums[k];
            }
        }


        for(int i=0;i<n;i++){
            if(nums[i]>=0) return i+1;
        }

        return n+1;
        
    }
};