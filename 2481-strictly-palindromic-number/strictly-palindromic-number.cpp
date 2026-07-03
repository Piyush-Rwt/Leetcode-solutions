class Solution {
public:
    string convert(int n, int base) {
        string s;

        while (n > 0) {
            s += (n % base) + '0';
            n /= base;
        }

        reverse(s.begin(), s.end());
        return s;
    }
    bool isStrictlyPalindromic(int n) {
        string temp,temp1;
        for(int i=2;i<=n-2;i++)
        {
            temp=convert(n,i);
            temp1=temp;
            reverse(temp1.begin(), temp1.end());
            if(temp1!=temp) return false;
        }
        return true;
    }
};