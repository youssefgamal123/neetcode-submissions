class Solution {
public:

    vector<vector<int>> res;
    vector<int> curr;

    void backtrack(vector<int>& nums, int index) {

        if (index == nums.size()) {
            res.push_back(curr);
            return;
        }

      
        curr.push_back(nums[index]);

        backtrack(nums, index + 1);

        curr.pop_back();

        int nextIndex = index;

        while (nextIndex + 1 < nums.size() &&
               nums[nextIndex] == nums[nextIndex + 1]) {
            nextIndex++;
        }

        backtrack(nums, nextIndex + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        backtrack(nums, 0);

        return res;
    }
};