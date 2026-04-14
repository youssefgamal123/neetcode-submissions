class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // generate keys based on the count of chars , each count of chars can be a unique key because anagrams will alwyas have the same key and diffrenet anagaramas have diffrent keys

        unordered_map<string, vector<string>> res; // map of keys to anagrams

        for (const auto& s: strs){

            vector<int> count (26,0);

            for (char c : s){
                count[c - 'a']++;
            }

            string key = to_string(count[0]);


            for (int i = 1 ; i<26;++i){
                key += ',' + to_string(count[i]);
            }

            res[key].push_back(s);

        }


        vector <vector <string>> output; 

        for (const auto& out : res ){
            output.push_back(out.second);
        }

        return output;
    }

    
     


};
