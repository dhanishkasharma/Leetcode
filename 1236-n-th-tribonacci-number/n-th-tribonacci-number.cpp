class Solution {
public:
    int tribonacci(int n) {

        if(n==0) return 0;
        if(n==1 || n==2) return 1;

        int a=0;
        int b=1;
        int c=1;

        for(int i=3;i<=n;i++){

            int temp1=b;
            int temp2=c;
            c=c+a+b;
            a=temp1;
            b=temp2;

        }

        return c;
        
    }
};