class Solution {
public:
    int maxFreqSum(string s) {
        int maxvowel=0,maxfreq=0;
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for (auto &p : mp) {
            if(p.first=='a' ||p.first=='e' || p.first=='i' || p.first=='o' || p.first=='u' )
            {
                if(p.second >maxvowel)
                {
                    maxvowel=p.second;
                }
            }
            else
            {  
                if(p.second>maxfreq) maxfreq=p.second;
            }
        
        }
        return maxvowel+maxfreq;
    }
        
};