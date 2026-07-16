class Solution {
public:
  string checker(string word){
       int freq[26]={0};

       for(int i=0;i<word.size();i++){
        freq[word[i]-'a']++;
       }


       string ans="";
       for(int i=0;i<26;i++){
        if(freq[i]>0){
            ans+=string(freq[i],i+'a');
        }
       }

       return ans;
  }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n=strs.size();
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans;



        for(int i=0;i<n;i++){
            string ch=strs[i];
            string ch1=checker(ch);
            mpp[ch1].push_back(strs[i]);
        }

        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
         
    }
};