class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ret(q.size());
        int count=0;
        for(int i=0; i<q.size(); i++) {
            for(int j=0; j<p.size(); j++) {
                if(pow(p[j][0]-q[i][0],2)+pow(p[j][1]-q[i][1],2)<=pow(q[i][2],2)) count++;
            }
            ret[i]=count; count=0;
        }
        return ret;
    }
};