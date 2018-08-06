class Solution {
public:
    bool judgeCircle(string moves) {
        int i, posx = 0, posy = 0;
        
        for(i = 0; i < moves.length(); i++){
            switch(moves[i]){
                case 'U': posy++; break;
                case 'L': posx--; break;
                case 'R': posx++; break;
                case 'D': posy--; break;
            }
        }
        
        if(posx == 0 && posy == 0){
            return true;
        }
        
        return false;
    }
};
