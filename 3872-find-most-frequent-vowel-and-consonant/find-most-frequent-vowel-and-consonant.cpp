class Solution {
public:
    int maxFreqSum(string s) {
        int fre[26]={0};
        for(char ch:s){
            fre[ch-'a']++;
        }
        int maxi=0;
        int taxi=0;
        for(int i=0;i<26;i++){
            char ch=i+'a';

if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                maxi= max(maxi, fre[i]);
            } else {
                taxi= max(taxi, fre[i]);
            }


        }
        return maxi+taxi;
    }
};