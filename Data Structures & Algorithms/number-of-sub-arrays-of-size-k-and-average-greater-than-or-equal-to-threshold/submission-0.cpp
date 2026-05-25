class Solution {
public:


        bool checktreshold(int sum, int k , int threshold){
            return (sum / k >= threshold);
        }

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int windowsum=0;
        int subarray_count = 0;
        int left = 0;

        for (int i = 0 ; i < k ;i++){

           windowsum+=arr[i];     

        }


        subarray_count += checktreshold(windowsum,k,threshold);
 



       
        for (int right = k ; right < arr.size();right++){
             windowsum-= arr[left];
             left++;
            windowsum+=arr[right];
            subarray_count += checktreshold(windowsum,k,threshold);


        }



        return subarray_count;


    }
};