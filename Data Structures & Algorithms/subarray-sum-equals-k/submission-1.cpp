class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        vector<vector<int>> valid;

        for (int start = 0; start < nums.size(); start++) {

            int sum = 0;
            vector<int> window;

            for (int end = start; end < nums.size(); end++) {

                sum += nums[end];
                window.push_back(nums[end]);

                if (sum == k) {
                    valid.push_back(window);
                }
            }
        }

        return valid.size();
    }
};