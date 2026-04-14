class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set <int> vals;

        for (int i = 0 ; i<nums.size();i++){
            auto it = vals.find(nums[i]);
            if (it != vals.end()){
                return true;
            }
            else {
                vals.insert(nums[i]);
            }
        }
        return false;


    }
};