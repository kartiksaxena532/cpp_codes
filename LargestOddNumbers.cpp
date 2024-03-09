class Solution {
public:
    string largestOddNumber(string num) {
        std::ios_base::sync_with_stdio(0); // turns off ties between c and c++ language 
        //jisme ki cpp mein hota hai cout and cin aur c mein hota hai scanf and printf 
        // ab ye optimization improve krta hai 
        cin.tie(0);
        for(int i = num.size() - 1 ; i>=0 ; i--) {
            if((num[i] - '0') % 2 != 0) {
                return num;
            } else {
                num.pop_back();
            }
        }
        return "";
    }
};
