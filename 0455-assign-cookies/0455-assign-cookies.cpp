class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int k=0;
        sort(s.begin(), s.end());
        for(int i=0; i<g.size(); i++) {
            for(int j=0; j<s.size(); j++) {
                if(g[i]<=s[j]) {
                    k++; s[j]=-1;
                    break;
                }
            }
        }
        return k;
    }
};