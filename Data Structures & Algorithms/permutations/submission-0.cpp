class Solution {
public:

    vector<vector<int>> res;
    vector<int> curr;
    vector<bool> used;

    void generatePermutations(vector<int>& nums) {

        if (curr.size() == nums.size()) {
            res.push_back(curr);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {

            if (used[i])
                continue;

          
            used[i] = true;
            curr.push_back(nums[i]);

            generatePermutations(nums);

            
            curr.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        used.resize(nums.size(), false);

        generatePermutations(nums);

        return res;
    }
};