class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int left = 0 ;
        int right = 0;

        string ans="";


        while ( left < word1.size()   && right < word2.size()){

            ans+=word1[left++];
            ans+=word2[right++];
        }


        ans+= word1.substr(left);
        ans+= word2.substr(right);

        return ans;





    }
};