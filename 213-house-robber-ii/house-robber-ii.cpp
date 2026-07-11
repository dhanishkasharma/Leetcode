class Solution {
public:
   int checker(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];

        int a2=0;
        int a1=nums[0];

        for(int i=1;i<n;i++){

            int temp=a1;
            int steal=nums[i]+a2;
            int skip=a1;
            a1=max(steal,skip);
            a2=temp;
            


        }

        return a1;
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();

        if(n==0) return 0;
        if(n==1) return nums[0];

        vector<int> temp1;
        vector<int> temp2;

        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }


        return max(checker(temp1),checker(temp2));
        
    }
};