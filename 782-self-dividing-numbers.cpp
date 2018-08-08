class Solution {
public:
    bool isSelfDiv(int n){
        int l, t = n;
        while(t > 0){
            l = t % 10;
            if(l == 0 || n % l != 0) return false;
            t /= 10;
        }
        
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int i;
        for(i = left; i <= right; i++){
            if(isSelfDiv(i)) res.push_back(i);
        }
        
        return res;
    }
};
