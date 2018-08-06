class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int i, j, t;
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size()/2 ; j++){
                t = A[i][j];
                A[i][j] = A[i][A[i].size() - 1 -j];
                A[i][A[i].size() - 1 -j] = t;
            }
        }
        
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size(); j++){
                A[i][j] = !A[i][j];
            }
        }
        
        return A;
        
    }
};
