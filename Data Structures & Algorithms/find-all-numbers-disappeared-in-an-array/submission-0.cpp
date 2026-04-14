class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {


        unordered_set <int> elements;

        for (int i = 1 ; i<= nums.size();i++){
            elements.insert(i);
        }



        unordered_set exists (nums.begin(),nums.end());

        vector <int>res;


        for (int n : elements){

          if (exists.find(n)  == exists.end()){
            res.push_back(n);
          }    


        }
        



        return res;

    }
};