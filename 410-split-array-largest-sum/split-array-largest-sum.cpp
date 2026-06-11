class Solution {
public:

    bool isvalid(vector<int>& nums,int mid,int k){
        int c=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){

            if(sum+nums[i]>mid){
                c++;
                sum=nums[i];
            }

            else{
                sum+=nums[i];
            }



        }

        return c<=k;


    }
    int splitArray(vector<int>& nums, int k) {

        int low=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        int high=sum;
        int ans=-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(nums,mid,k)){
                ans=mid;
                high=mid-1;

            } 
            else low=mid+1;
        }

        
             return ans;
        
    }
};