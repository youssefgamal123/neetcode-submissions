class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        
       
        int counter=0;
        int sum=0;

        int left = 0;

        for (int right = 0 ; right < nums.size();right++){

          sum=0;

         
    for (int left = right; left < nums.size(); left++) {
        sum += nums[left];

        if (sum == k) {
            counter++;
        }
    }



        }

        return counter;
        
    }
};