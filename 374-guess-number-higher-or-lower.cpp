// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
        int beg = 1, end = n, mid;
        
        while(beg <= end){
            mid = beg + (end - beg)/2;
            int g = guess(mid);
            if(g == 0) return mid;
            else if(g == 1) beg = mid + 1;
            else end = mid - 1;
        }
        
        return -1;
    }
};
