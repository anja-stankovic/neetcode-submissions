class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> niz;
        for (int n: nums){
            if(niz.find(n) != niz.end()) return true;
            niz.insert(n);
        }
        return false;

    }
};
