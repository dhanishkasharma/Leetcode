class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi=0;
        


        for(int nums:st){
            if(st.find(nums-1)==st.end()){
                int cnt=1;
               int nuna=nums;


            while(st.find(nuna+1)!=st.end()){
                cnt++;
                nuna++;
            }
            maxi=max(maxi,cnt);
        }
        }
        return maxi;
        
    }
};