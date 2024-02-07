class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> ret(m,(vector<int>(n, 0)));
        int ans=0;
        for(int i=0; i<indices.size(); i++) {
            for(int ai=0; ai<n; ai++) ret[indices[i][0]][ai]++;
            for(int aj=0; aj<m; aj++) ret[aj][indices[i][1]]++;
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(ret[i][j]%2)  ans++;
            }
        }
        return ans;
    }
};