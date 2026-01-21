class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char ch:s){
            mpp[ch]++;
        }

        int n=s.size();

        vector<vector<char>> bucket(n+1);
        for (auto &it : mpp) {
    char ch = it.first;
    int freq = it.second;
    bucket[freq].push_back(ch);
}
        string picka;

        for(int i=n;i>=1;i--){
            for(char ch:bucket[i]){
                picka.append(i,ch);

            }
        }
        return picka;
        
    }
};