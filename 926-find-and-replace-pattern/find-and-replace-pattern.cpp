class Solution {
public:

      bool isomo(string words,string pattern){

        unordered_map<char,int> c1;
        unordered_map<char,int> c2;

             for(int i=0;i<words.length();i++){
                if(c1.find(pattern[i])==c1.end()){
                    c1[pattern[i]]=i;
                }
    
                if(c2.find(words[i])==c2.end()){
                    c2[words[i]]=i;
                }

                if(c1[pattern[i]]!=c2[words[i]]){
                    return false;
                }

                               
                

             }
             return true;
      }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> ans;

        for(int i=0;i<words.size();i++){
             if(isomo(words[i],pattern)==true) {
                ans.push_back(words[i]);
             }
        }
        return ans;
    }
};