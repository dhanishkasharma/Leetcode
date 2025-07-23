class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int num:nums){
            if(a.count(num)>0) return true;
            a.insert(num);
        }
        return false;
    }
};