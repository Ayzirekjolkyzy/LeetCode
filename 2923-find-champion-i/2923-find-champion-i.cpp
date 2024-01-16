class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        bool k=true; int ret;
        for(int i=0; i<grid.size(); i++) { 
            k=true;
            for(int j=0; j<grid[i].size(); j++) {
                if(i==j) continue;
                else {
                   if(grid[i][j]==0) { k=false; break;} 
                 }
            }
            if(k) {  ret=i; break; } 
        }
        return ret;
    }
};