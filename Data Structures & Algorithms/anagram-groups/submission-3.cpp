class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mapa;
        for(string s: strs){
        vector<int> pojavljivanja(26, 0);            
        for(char c: s){
                pojavljivanja[c - 97]++;
            }
            mapa[pojavljivanja].push_back(s);
        }

        vector<vector<string>> rez;

        for(auto const&[k,v] : mapa){
            rez.push_back(v);
        }
        
        return rez;
    }
};
