class Solution {
public:



    vector<vector<int>>res;
    vector<int> curr;


    void sol (vector<int>& nums , int index , int target,   int sum ) {


       if (sum==target){
        res.push_back(curr);
        return;
       }     

       if (index == nums.size()){
        return;
       }

        if(sum > target){
        return;
        }

       curr.push_back(nums[index]);
       sol(nums,index+1,target,sum+nums[index]);

       curr.pop_back();


        int nextIndex = index;

        while(nextIndex+1 < nums.size() && nums[nextIndex] == nums[nextIndex+1] ){
            nextIndex++;
        }


        sol(nums,nextIndex+1,target,sum);

    }   


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        

        sort(candidates.begin(),candidates.end());

        sol(candidates,0,target,0);

        return res;


    }
};
