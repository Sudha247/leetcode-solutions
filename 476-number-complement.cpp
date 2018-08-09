class Solution {
public:
    int findComplement(int num) {
        int t = num;
        int np = 0;
        while(t){
            t /= 2;
            np++;
        }
        
        int n = pow(2, np);
        n--;
        
        int res = num^n;
        return res;
    }
};
