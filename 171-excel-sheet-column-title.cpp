class Solution {
public:
    int titleToNumber(string s) {
        int l = s.length();
        int i = l-1, pos = 0, sum = 0;
        
        while(i >= 0){
            sum += (int(s[i] - 'A' + 1))*pow(26,pos);
            pos++; i--;
        }
        
        return sum;
    }
};
