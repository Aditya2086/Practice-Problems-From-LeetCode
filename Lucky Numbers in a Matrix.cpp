class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row_min = INT_MAX, col_max = INT_MIN;
        vector<int> row_min_vec, col_max_vec, res;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++)
                row_min = std::min( row_min, matrix[i][j]);
            row_min_vec.push_back(row_min);
            row_min = INT_MAX;
        }
        for(int j=0; j<matrix[0].size(); j++){
            for(int i=0; i<matrix.size(); i++)
                col_max = std::max( col_max, matrix[i][j]);
            col_max_vec.push_back(col_max);
            col_max = INT_MIN;
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if( matrix[i][j] == row_min_vec[i] 
                 && matrix[i][j] == col_max_vec[j]) res.push_back(matrix[i][j]);
            }
        } return res;
    }
};
