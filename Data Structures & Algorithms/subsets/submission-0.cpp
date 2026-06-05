class Solution {
public:

     vector<vector<int>> res;
      vector <int> curr;


        void solve (int index, int numssize , vector<int>& numss ){

          if (index == numssize){
            res.push_back(curr);
            return;
          }  

          curr.push_back(numss[index]);     // do 
          solve (index+1 , numssize,numss); // recurncese 

            curr.pop_back(); // undo
            solve (index+1 , numssize,numss);  





        }




    vector<vector<int>> subsets(vector<int>& nums) {

    
        solve(0 , nums.size(), nums);
        return res;




    }
};
