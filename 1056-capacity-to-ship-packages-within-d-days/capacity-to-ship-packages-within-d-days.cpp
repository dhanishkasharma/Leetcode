class Solution {
public:

    int find(int mid,vector<int>& weights,int days){
        int sum=0;
        int k=1;
        for(int i=0;i<weights.size();i++){
           if(sum+weights[i]>mid){
              k++;
              sum=weights[i];
           }

           else{
            sum+=weights[i];
           }
        }


        if(k<=days) return 0;
        else return -1;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int sum=0;

        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }

        int high=sum;
        int low = *max_element(weights.begin(), weights.end());

        while(low<=high){
            int mid=low+(high-low)/2;

            int l=find(mid,weights,days);

            if(l==0) {
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }



      return low;
        
        
    }
};