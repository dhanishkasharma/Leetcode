class Solution {
public:
    long long sumAndMultiply(int n) {


        if(n==0) return 0;

        long long x=0;
        long long sum=0;
        long long place=1;

        while(n>0){
            int c=n%10;

            if(c!=0){
                x=c*place+x;
                sum+=c;
                place*=10;
            }
            n/=10;
        }

        return x*sum;
        
    }
};