class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = nums.size();
        unordered_map<int, int> m;
        int i;
        
        for(i = 0; i < l; i++){
           // m[i]++;
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 1;
            }
            else{
                m[nums[i]]++;
            }
            
            if(m[nums[i]] > l/2) return nums[i];
        }
        
        return 0;
        
    }
};
