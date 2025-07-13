class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
         int s=words.size();
         vector<int> a;
         for(int i=0;i<s;i++){
            if(count(words[i].begin(),words[i].end(),x)) a.push_back(i);
         }


              
              return a;
         
    }
};