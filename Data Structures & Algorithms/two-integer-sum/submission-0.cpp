class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int j=0;
        for(int i=0; i< nums.size(); i++){
            int X = target-nums[i];
            j= i+1;
            while(j<nums.size()){
                if( X != nums[j]) j++;
                else  return {i,j};
            }
        }
        return {};
    }
};
