class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        

        int right = 0;

        for (int left = 0 ; left<n;left++ ){

            nums1[left+m] = nums2[right++] ;

        }




        sort (nums1.begin(),nums1.end());
    


    }
};