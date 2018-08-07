class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret(num+1, 0);
        int i;
        for(i = 1; i <= num; i++){
            ret[i] = ret[i&(i-1)] + 1;
        }
        
        return ret;
    }
};
