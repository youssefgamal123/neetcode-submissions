class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
       unordered_map <char,int> windowfreq , s1freq;


      for (char c : s1){
       s1freq[c]++; 

      }



      int left = 0; 

      for (int right =  0 ; right < s2.size();right++){

        windowfreq[s2[right]]++;

        if (right-left+1 > s1.size()){
          windowfreq[s2[left]]--;
          
          if (windowfreq[s2[left]] ==  0 ){
            windowfreq.erase(s2[left]);
        
          }
         left++;

        }


       if (windowfreq == s1freq){
          return true;
      }
        

      }

      

      return false;




    }
};
