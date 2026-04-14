class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map <int,int>numToCount;

       int n = nums.size();

        vector<int>ans;

        for (int num:nums){
            
            numToCount[num]++;
        } 

        for (auto &pair :numToCount ){

            if (pair.second > (n/3)){

                ans.push_back(pair.first);
            }

        }


        return ans;
    }
};