class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int>mapa;

        for(char c : s){
            mapa[c]++;
        }

        for(char k : t){
            mapa[k]--;
        }

        for(const auto&[k,v] : mapa){
            if(v !=0) return false;
        }
        return true;
    }
};
