class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        int ex = nums[0];
        
        for(i = 1; i < nums.size(); i++){
            ex ^= nums[i];
        }
        
        return ex;
    }
};
