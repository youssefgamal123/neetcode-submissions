class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {


        int left = 0;

        int WindowSum = 0 ;
        int ans = INT_MAX;

        for (int right =0 ; right < nums.size();right++){

        WindowSum+=nums[right];

        while(WindowSum >= target){ 

          ans =  min (right-left+1,ans); 
          WindowSum-=nums[left];  
            left++;

        }


        }

        if (ans == INT_MAX ){
            return 0;
        }
         return ans;




    }
};