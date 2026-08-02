class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num); //convert int to str

        for (char &ch : s) {
            if (ch == '6') { // changing the first 6 only to 9 
                ch = '9';
                break;
            }
        }

        return stoi(s); // convert str to int again
    }
};