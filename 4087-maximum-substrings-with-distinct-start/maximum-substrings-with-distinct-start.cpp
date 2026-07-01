class Solution {
public:
    int maxDistinct(string s) {
        sort(s.begin(), s.end());
        int c=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            c++;
        }
        return c;
    }
};