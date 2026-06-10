class Solution {
public:

   int star(int mid,int book,int flower,vector<int>& bloomDay){

    int cons=0;
    int l=0;




    for(int i=0;i<bloomDay.size();i++){
       if(bloomDay[i]<=mid){
        cons++;

        if(cons==flower){
            l++;
            cons=0;

        }

       }

       else{
        cons=0;
       }
    }

       if(l>=book) return 0;
       else return -1;
    

   }
     
       
   
    int minDays(vector<int>& bloomDay, int m, int k) {

        int a=*max_element(bloomDay.begin(),bloomDay.end());
        int b=*min_element(bloomDay.begin(),bloomDay.end());

            if ((long long)m * k > bloomDay.size())
    return -1;

        int low=b;
        int high=a;
        while(low<=high){
            int mid=low+(high-low)/2;

            int p=star(mid,m,k,bloomDay);

            if(p==0){
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }

        return low;
    
        
    }
};