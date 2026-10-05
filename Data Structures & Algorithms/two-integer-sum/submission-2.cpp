class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapa;

        for(int i=0; i<nums.size(); i++){
            int x = target-nums[i];
            if(mapa.contains(x)){
                if( i < mapa[i]){
                    return {i, mapa[x]};
                }else{
                    return {mapa[x], i};
                }
            }
            mapa[nums[i]] = i;
        }

        return {};
    }
};
