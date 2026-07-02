class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        char c;
        for (int i = 0; i < words.size(); i++) {
            
            for (int j = 0; j < words[i].size(); j++) {
                c=words[i][j];
                if(c==x) {
                ans.push_back(i); 
                break;}
            }
            
        }
    return ans;
    }  
};