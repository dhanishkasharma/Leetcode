class Solution {
public:

   static bool comp(pair<char,int> vp1,pair<char,int> vp2){
       return vp1.second>vp2.second;
   }
    string frequencySort(string s) {
        unordered_map<char,int> mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
           vector<pair<char,int>> vp;
        for(auto it:mpp){
            vp.push_back({it.first,it.second});

        }

        sort(vp.begin(),vp.end(),comp);
    string ans="";
    for(auto p:vp){
        ans+=string(p.second,p.first);
    }
return ans;

    }
};