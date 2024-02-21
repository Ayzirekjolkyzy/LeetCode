class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int t;
        int ii, jj;
        for(int i=0; i<matrix.size()-1;i++) {
            t=matrix[i][0]; jj=0;
            for(ii=i; ii<matrix.size()&&jj<matrix[ii].size(); ii++) {
                if(matrix[ii][jj]!=t) return false;
                jj++;
            }
        }
        for(int j=0; j<matrix[0].size()-1; j++) {
            t=matrix[0][j]; ii=0;
            for(jj=j; jj<matrix[0].size()&&ii<matrix.size(); jj++) {
                if(matrix[ii][jj]!=t) return false;
                ii++;
            }
        }
        return true;
    }
};