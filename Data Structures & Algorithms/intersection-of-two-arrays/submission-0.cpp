class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int,int> freq1;
        unordered_map <int,int> freq2;
        vector<int>res;


        for (int n : nums1){
            freq1[n]++;
        }



        for (int c : nums2){
            freq2[c]++;
        }




        for (auto& pair : freq1){

        int element = pair.first;
        int count = pair.second;

        if (freq2.find(element) != freq2.end()){
           
                res.push_back(element);
            
        } 




        }


        return res;


    }
};