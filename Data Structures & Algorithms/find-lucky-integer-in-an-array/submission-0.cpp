class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map <int,int>freqMap;


        for (int num : arr){
            freqMap[num]++;
        }    


        int maxLucky = 0;

        for (auto &pair  :freqMap){

            if (pair.first == pair.second){
                int lucky = pair.first;
                maxLucky = max(maxLucky,lucky);
            }


        }


        if (maxLucky> 0 ){
            return maxLucky;
        }
        return -1;


    }
};