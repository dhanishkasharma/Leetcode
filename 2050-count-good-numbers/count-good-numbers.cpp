class Solution {
public:
  long long MOD = 1e9 + 7;

   long long power(long long a,long long b){
    long long res=1;

    while(b>0){
        if(b%2==1){
            res=(res*a)%MOD;
            b=b-1;

        }

        else{
            b=b/2;
            a=(a*a)%MOD;
        }

        
    }
    return res;

   }
    int countGoodNumbers(long long n) {

        long long i;
        long long j;

        if(n%2==0){
            i=n/2;
            j=n/2;
        }

        else{
            i=(n+1)/2;
            j=n/2;
        }

        int c=(power(5,i)*power(4,j))%MOD;

        return c;

        
    }
};