class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
      unordered_map <int,int> window;


      int left = 0;
        int total = 0;
        int maxlen = 0;

      for (int right = 0 ; right < fruits.size();right++){

        window[fruits[right]]++;
        total++;

        while (window.size() > 2 ){
            int fruit = fruits[left];
            window[fruit]--;
            total--;

            if (window[fruit] == 0){
                window.erase(fruit);
            }
             left++;
           

        }

        maxlen = max (total,maxlen);

      }  

      return maxlen; 



    }
};