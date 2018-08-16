class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        int i;
        
        for(i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) == m.end())
                m[nums[i]] = 1;
            else
                m[nums[i]]++;
        }
        int f = 1;
        for(i = 0; i < nums.size(); i++){
            if(m[nums[i]] != 1) f = 0;
        }
        
        if(f == 1) return false;
        return true;
    }
};
