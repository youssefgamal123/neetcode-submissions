class Solution {
public:
    int findMin(vector<int> &nums) {
        

        // nums[mid]> nums[right] -> pivot-1


        int l = 0;
        int r = nums.size()-1;


        while(l<r){
            
                int mid = (l+r)/2;

             if (nums[mid] > nums[r] ){
                l = mid+1;
             }   

            else{
                r = mid;
            }

        }

        int pivot = l;
        return nums[pivot];





    }
};
