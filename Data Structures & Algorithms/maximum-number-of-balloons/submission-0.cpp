class Solution {
public:
    int maxNumberOfBalloons(string text) {
        

        unordered_map <char,int> countinText;


        for (char c : text){
            countinText[c]++;
        }



        unordered_map <char,int> Balloon = {

            {'b',1},
            {'a',1},
            {'l',2},
            {'o',2},
            {'n',1},
            
        };


        int res = INT_MAX;

       for (auto &p : Balloon){

        char ch = p.first;        
        char needed = p.second;

        res = min (res,countinText[ch] / needed);


       }

        return res;



    }
};