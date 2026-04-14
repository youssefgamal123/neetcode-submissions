class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        int res = right;


        while (left<= right){

        int capacity = (left+right) /2;



        if (CanShip(weights,days,capacity)){
            res = min(res,capacity);
            // can ship so we can look for smaller capcities
            right = capacity-1;

        }
        else {
            left = capacity+1;
        }

        }

        return res;

    }




    bool CanShip(vector<int> weights , int  days , int capacity){

        int daysUsed=1;
        int load=0;


        for (int w : weights){

            if (load + w > capacity){
                daysUsed++;
                load = 0;

            }


            load+=w;

            if (daysUsed > days){
                return false;
            }



        }

        return true;


    }



};