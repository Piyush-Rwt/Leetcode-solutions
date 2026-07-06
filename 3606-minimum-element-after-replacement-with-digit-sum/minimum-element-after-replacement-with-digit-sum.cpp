class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0,n;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
        n=nums[i];
        while (n > 0) {
        int digit = n % 10;
        sum+=digit;
        n /= 10;}
        ans.push_back(sum);
        }

        int mn = *min_element(ans.begin(), ans.end());
        return mn;
        }
    
};