class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
             int n=nums.size();
             vector<int> abc=nums;
             sort(abc.begin(),abc.end());

             unordered_map<int,int> mpp;
             for(int i=0;i<n;i++){
                if(mpp.find(abc[i])==mpp.end()){
                    mpp[abc[i]]=i;
                }
             }
             vector<int> ans;
             for(int x:nums){
                ans.push_back(mpp[x]);
             }
        return ans;
    }
};