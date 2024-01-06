class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int temp=0, tempi=0, count=0;
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                if(mat[i][j]==1) temp++;
            } if(temp>count) { count=temp; tempi=i; }
            temp=0;
        }
        return {tempi, count};
    }
};