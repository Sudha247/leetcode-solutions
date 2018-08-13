class Solution {
public:
    int romanToInt(string s) {
        int i = 0, val = 0;
        while(i < s.length()){
            switch(s[i]){
                case 'V':{val += 5; break;}
                case 'L':{val += 50; break;}
                case 'D':{val += 500; break;}
                case 'M':{val += 1000; break;}
                case 'I':{
                    if(s[i+1] == 'V'){
                        val += 4; i++;
                    }
                    
                    else if(s[i+1] == 'X'){
                        val += 9; i++;
                    }
                    
                    else{
                        val += 1;
                    }
                    
                    break;
                }
                case 'X':{
                    if(s[i+1] == 'L'){
                        val += 40; i++;
                    }
                    
                    else if(s[i+1] == 'C'){
                        val += 90; i++;
                    }
                    
                    else{
                        val += 10;
                    }
                    
                    break;
                }
                case 'C':{
                    if(s[i+1] == 'D'){
                        val += 400; i++;
                    }
                    
                    else if(s[i+1] == 'M'){
                        val += 900; i++;
                    }
                    
                    else{
                        val += 100;
                    }
                    
                    break;
                }
            }
            
            i++;
        }
        
        return val;
    }
};
