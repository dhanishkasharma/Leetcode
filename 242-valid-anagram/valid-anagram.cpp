class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> num;
        for(char c:s){
            num[c]++;
        }
        for(char c:t){
            if(num.find(c)==num.end() || num[c]==0){
                return false;
            }
            num[c]--;
        }
        return true;

    }
};