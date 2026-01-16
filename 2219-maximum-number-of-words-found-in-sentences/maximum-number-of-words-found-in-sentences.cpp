class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            int words=1;
            for(char ch:sentences[i]){
                if(ch==' ') words++;
            }
            maxi=max(maxi,words);
        }
        return maxi;
        
    }
};