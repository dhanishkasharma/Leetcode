class Solution {
public:
    int trap(vector<int>& height) {

        int leftmax=0;
        int rightmax=0;
        int n=height.size();

        int left=0;
        int right=n-1;
        int water=0;

        while(left<right){
            if(height[left]<height[right]){

                leftmax=max(height[left],leftmax);
                    water+=leftmax-height[left];

            left++;

            }

            else{

                 rightmax=max(height[right],rightmax);


               
                    water+=rightmax-height[right];
                    right--;


        }
        }

        return water;
        
    }
};