class Solution {
public:
    void sortColors(vector<int>& nums) {

        int i=0;
        int j=0;
        int k=0;

        for(int p=0;p<nums.size();p++){
            if(nums[p]==0) i++;
            else if(nums[p]==1) j++;
            else{
                k++;
            }


        }

        int p=0;

        while(p<nums.size()){
            while(i!=0){
                nums[p]=0;
                i--;
                p++;
            }

            while(j!=0){
                nums[p]=1;
                j--;
                p++;
            }
           
           while(k!=0){
                nums[p]=2;
                k--;
                p++;
            }



        }
        
    }
};