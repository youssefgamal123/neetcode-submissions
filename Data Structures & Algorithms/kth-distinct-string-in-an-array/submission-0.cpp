class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        

       unordered_map <string,int> freqmap;


       for (const string& s : arr){
        freqmap[s]++;
       } 


      for  (const string &str : arr) {

            if (freqmap[str] == 1) {
                k--;
                if (k==0) {
                    return str;
                }
            }



        }

       
        return "";



       }


        
    };
