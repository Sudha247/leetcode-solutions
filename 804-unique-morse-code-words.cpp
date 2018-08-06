class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string, int> m;
        int i, j;
        
        for(i = 0; i < words.size(); i++){
            string s = " ";
            for(j = 0; j < words[i].length(); j++){
                s += morse[int(words[i][j]) - int('a')];
            }
            
            if(m.find(s) == m.end()){
                m.insert(make_pair(s,1));
            }
            
            else{
                m[s]++;
            }
        }
        
        return m.size();
    }
};
