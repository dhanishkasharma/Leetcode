class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {

        vector<int> comp(n);
       int compi=0;
        comp[0]=compi;


        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>maxDiff){
                compi++;
            }
            comp[i]=compi;
        }

        vector<bool> ans;
        for(auto it:queries){
            int c=it[0];
            int l=it[1];
            if(comp[c]==comp[l]) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;

        
    }
};