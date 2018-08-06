class Solution {
public:
    string toLowerCase(string str) {
        char s; int i;
        string res;
        for(i = 0; i < str.length(); i++){
            if(isupper(str[i]))
                res+=(tolower(str[i]));
            else
                res+=(str[i]);
        }
        
        return res;
    }
};
