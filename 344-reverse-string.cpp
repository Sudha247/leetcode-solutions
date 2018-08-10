class Solution {
public:
    string reverseString(string s) {
        int i;
        for(i = 0; i < s.length()/2; i++){
            char t = s[i];
            s[i] = s[s.length()-1-i];
            s[s.length()-1-i] = t;
        }
        
        return s;
    }
};
