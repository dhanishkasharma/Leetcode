class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> st;
        unordered_map<char,int> pt;

        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()){
                st[s[i]]=i;
            }

             if(pt.find(t[i])==pt.end()){
                pt[t[i]]=i;
            }

            if(st[s[i]]!=pt[t[i]]){
                return false;
            }
        }
        return true;
        
    }
};