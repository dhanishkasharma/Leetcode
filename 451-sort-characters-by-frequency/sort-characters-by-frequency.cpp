class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
          vector<vector<char>> bucket(n+1);

          for(auto p:mpp){
            bucket[p.second].push_back(p.first);
          }

          string ans="";

          for(int i=n;i>=1;i--){
            for(char ch:bucket[i]){
                ans+=string(i,ch);
            }
          }
return ans;

    }
};