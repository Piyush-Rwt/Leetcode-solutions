class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> same;
        vector<int> right;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                right.push_back(nums[i]);
            }
            else
            {
                same.push_back(nums[i]);
            }
        }
        left.insert(left.end(), same.begin(), same.end());
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};