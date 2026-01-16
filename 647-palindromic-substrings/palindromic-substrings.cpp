class Solution {
    private:
        int count(string s,int left,int right){
            int county=0;

            while(left>=0 && right<s.length() && s[left]==s[right]){
                county++;
                left--;
                right++;
            }
            return county;
        }
public:
    int countSubstrings(string s) {
        int res=0;

        for(int i=0;i<s.size();i++){
            res+=count(s,i,i);
            res+=count(s,i,i+1);
        }
        return res;
        
    }
};