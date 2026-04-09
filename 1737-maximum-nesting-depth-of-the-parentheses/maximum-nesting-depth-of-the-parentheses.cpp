class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int j=0;
        int cnt=0;

        while(j<s.size()){
            if(s[j]=='(') cnt++;

            else if(s[j]==')') cnt--;

            maxi=max(maxi,cnt);
            j++;
        }
       return maxi;
    }
};