class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int u = 0, d = m - 1, l = 0, r = n - 1, ptr = 0;
        vector<int> res(m * n, 0);
        while( u <= d && l <= r ){
            for(int cur_col = l; cur_col <= r; cur_col++){
                res[ptr] = matrix[u][cur_col];
                ptr++;
            } u++; 
            if( u > d ) break;
            // if( ptr >= res.size() ) break;
            for(int cur_row = u; cur_row <= d; cur_row++){
                res[ptr] = matrix[cur_row][r];
                ptr++;
            } r--; 
            if( r < l ) break;
            // if( ptr >= res.size() ) break;
            for(int cur_col = r; cur_col >= l; cur_col--){
                res[ptr] = matrix[d][cur_col];
                ptr++;
            } d--; 
            if( d < u ) break;
            // if( ptr >= res.size() ) break;
            for(int cur_row = d; cur_row >= u; cur_row--){
                res[ptr] = matrix[cur_row][l];
                ptr++;
            } l++; 
            if( l > r ) break;
            // if( ptr >= res.size() ) break;
        } return res;
    }
};
