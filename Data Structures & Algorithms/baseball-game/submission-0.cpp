class Solution {
public:
    int calPoints(vector<string>& operations) {
        

        stack <int>records;

        for (string c : operations ){

            if (c == "+"){
                
                int temp = records.top();
                records.pop();
                int new_score = temp+records.top();
                records.push(temp);
                records.push(new_score);

            }

            else if (c =="D"){

               int new_score = 2 * (records.top());
               records.push(new_score);     

            }

            else if (c == "C"){
                records.pop();
            }


            else {
               records.push(stoi(c));
            }


        }


      int sum = 0;

    while (!records.empty()) {
        sum += records.top();
        records.pop();
    }

    return sum;

    }
};