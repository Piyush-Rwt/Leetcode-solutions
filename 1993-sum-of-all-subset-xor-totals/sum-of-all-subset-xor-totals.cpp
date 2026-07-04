class Solution {
public:
    vector<int> subset;
    int sum = 0;

    void backtrack(vector<int>& nums, int index) {
        if (index == nums.size()) {
            int xr = 0;

            for (int x : subset) {
                xr ^= x;
            }

            sum += xr;
            return;
        }

        // Don't take nums[index]
        backtrack(nums, index + 1);

        // Take nums[index]
        subset.push_back(nums[index]);
        backtrack(nums, index + 1);

        // Backtrack
        subset.pop_back();
    }

    int subsetXORSum(vector<int>& nums) {
        backtrack(nums, 0);
        return sum;
    }
};