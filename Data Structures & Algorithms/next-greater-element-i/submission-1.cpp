class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        


        vector<int> res;

        for (int num  : nums1){

             int nextGreater =-1;

              for (int j = nums2.size()-1;  j >= 0 ; j--){

                if (nums2[j] > num){
                    nextGreater = nums2[j];

                }
                else if (nums2[j]  == num){
                    break;
                }

                
              }
              res.push_back(nextGreater);  



        }




        return res;

    }
};