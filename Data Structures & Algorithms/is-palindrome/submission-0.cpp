class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for(char c : s){
            if((c >='a' && c<='z') || (c >='0' && c<='9')) clean+=c;
            else if(c >='A' && c<='Z') clean += (c + 32);
        }

        int i=0, j = clean.size()-1;
        while( i < j){
            if(clean[i] != clean[j]) return false;

            i++;
            j--;
        }
        return true;
    }
};
