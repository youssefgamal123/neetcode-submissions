class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {



        int ans = 0;


        for (string&s : words){
             bool flag = true;
            for (char c : s){
                if (allowed.find(c) == string::npos ){
                    flag = false;
                    break;
                }

            }
            ans+=flag;


        }

        return ans;
        
    }
};