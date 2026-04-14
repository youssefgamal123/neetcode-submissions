class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map <int,int>numtoCounter;

       int max_count = 0;
        int res = 0;

        for (int num : nums ){

            numtoCounter[num]++;

            if (numtoCounter[num] > max_count){
                max_count = numtoCounter[num];
                res = num;
            }

        }



        return res;

    }
};