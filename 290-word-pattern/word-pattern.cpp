class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> p;
        unordered_map<string,int> c;
        int j=0;
            for(int i=0;i<pattern.size();i++){

                if(j>s.size()) return false;
                if(p.find(pattern[i])==p.end()){
                    p[pattern[i]]=i;
                }

                int start=j;
                
                  while(s[j]!=' ' && j<s.size()){
                    j++;
                  }

                  string str=s.substr(start,j-start);

                if(c.find(str)==c.end() ){
                c[str]=i;
                }

                if(p[pattern[i]]!=c[str]){
                    return false;
                }
                j++;
            }


            if(j<s.size()) return false;
            return true;
    }
};