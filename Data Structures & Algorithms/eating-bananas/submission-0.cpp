class Solution {
public:

    bool canEat(vector<int>& bananaPile , int k  , int hours){

        
        int takentime = 0;

        for (int i = 0 ; i< bananaPile.size();i++){
           takentime += (bananaPile[i] + k - 1) / k;
        }        



        if (takentime <= hours){
            return true;
        }

        else {
            return false;
        }


    }


    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long left = 1;

        long long right = 1000000000;

        long long minK = INT_MAX;

        while (left<= right){


            long long mid = (right + left) /2 ;    
            if (canEat(piles , mid , h)){
                minK = min (minK,mid);
                right = mid-1;

            }
            else {

                left = mid+1;


            }


        }



        return minK;


    }
};
