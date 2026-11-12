class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char& c: s){
            if(isalnum(c)){
                char new_char = tolower(c);
                str = str + new_char;
            }
        }
        int size = str.size();
        int low = 0;
        int high = size - 1;
        while(low <= high){
            if(str[low] == str[high]){
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
