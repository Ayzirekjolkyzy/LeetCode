class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        vector<int> ret; int mint, maxt, mini;
        for(int i=0; i<m.size(); i++) {
            mint=*min_element(m[i].begin(), m[i].end());
            auto it=min_element(m[i].begin(), m[i].end());
            mini=distance(m[i].begin(), it);
            maxt=m[0][mini];
            for(int j=0; j<m.size(); j++){
                if(m[j][mini]>maxt) maxt=m[j][mini];
            }
            if(maxt==mint) ret.push_back(maxt);
        }
        return ret;
    }
};