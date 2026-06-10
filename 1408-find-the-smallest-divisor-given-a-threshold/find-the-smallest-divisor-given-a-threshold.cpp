class Solution {
public:

    int divisor(vector<int>& nums,int mid){

        double sum=0;

        for(int i=0;i<nums.size();i++){

            sum+=(nums[i]+mid-1)/mid;
            
        }

        return (int)sum;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int high=*max_element(nums.begin(),nums.end());
        int low=1;
        int mini=INT_MAX;
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            int sum=divisor(nums,mid);
            if(sum<=threshold){
                 ans=mid;
                 high=mid-1;
            }

            else{
                low=mid+1;
            }

            
        }

        return ans;


        
    }
};