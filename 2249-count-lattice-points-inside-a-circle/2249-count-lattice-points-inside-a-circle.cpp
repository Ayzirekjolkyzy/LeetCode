class Solution {
public:
    int countLatticePoints(vector<vector<int>>& c) {
        set<pair<int, int>> ret;
        for(int i=0; i<c.size(); i++) {
            for(int a=(c[i][0]-c[i][2]); a<=(c[i][0]+c[i][2]); a++) {
                for(int b=(c[i][1]-c[i][2]); b<=(c[i][1]+c[i][2]); b++) {
                    if((pow((a-c[i][0]),2)+pow((b-c[i][1]),2))<=pow(c[i][2],2)) ret.insert({a, b});
                }
            }
        }
        return ret.size();
    }
};