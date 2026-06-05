class Solution {
public:

    vector<vector<int>> res;
    vector<int> curr;

        void solve(int index, vector<int>&elements,int sum , int target){

            if (sum == target){
                res.push_back(curr);
                return;
            }


            if (sum > target){
                return;
            }

            if (index == elements.size()){
                return;
            }

            curr.push_back(elements[index]);

            solve(index,elements,
              sum + elements[index] , target);

            curr.pop_back();

    
       
            solve(index +1 ,elements,
              sum , target);


        }



    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        

        solve(0,nums,0,target);

        return res;

    }
};
