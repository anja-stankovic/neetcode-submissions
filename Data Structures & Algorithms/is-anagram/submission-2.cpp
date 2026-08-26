class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> mapa;
        for(char c : s){
            mapa[c]++;
        }

        for(char c : t){
            if(mapa[c] == 0){
                return false;
            }else{
                mapa[c]--;
            }
        }

        for(auto const& [key, val] : mapa){
            if(val != 0) return false;
        }
        return true;
    }
};
