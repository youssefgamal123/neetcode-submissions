class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char,char> rightOpenings = {
            {')','('},
            {']','['},
            {'}','{'}
        };

        stack <char> st;

        for (char c : s){

           if (rightOpenings.find(c) == rightOpenings.end()) {
                st.push(c);
            } 
             else if (!st.empty() && rightOpenings[c] == st.top()){
                st.pop();
             }
             else {
                return false;
             }  

        }

        return st.empty();



    }
};
