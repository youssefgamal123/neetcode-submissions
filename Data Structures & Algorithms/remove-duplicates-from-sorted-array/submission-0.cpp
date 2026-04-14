class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        set <int> seen;
        int i = 0;

        for (int num : nums){

            if (seen.find(num)  == seen.end()){
                seen.insert(num);
            }
        }

        for (int res : seen){
            nums[i++]=res;
        }

       

        return i;

    }
};