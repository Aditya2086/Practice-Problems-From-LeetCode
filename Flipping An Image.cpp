class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); i++){
            for(int left = 0, right = A[i].size()-1; left < right; left++, right--)
                swap( A[i][left], A[i][right]); // reverse
            for(int j=0; j<A[i].size(); j++) 
                A[i][j] = abs( A[i][j]-1 ); // invert
        } return A;
    }
};
