class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set <char>set;


        int maxlength = 0 ;
        int res = 0;
        int left = 0;
      

        for (  int right = 0; right < s.size() ; right++ ){

            
            while(set.find(s[right])  != set.end() ){
                
                set.erase(s[left]);
                left++;

            }
            set.insert(s[right]);
            maxlength= max(maxlength,right-left+1);

        }




        return maxlength;

    }
};
