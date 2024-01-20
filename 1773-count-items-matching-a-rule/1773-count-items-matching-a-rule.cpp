class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rK, string rV) {
        int res=0, j;
        if(rK=="type") j=0; 
        else if(rK=="color") j=1;
        else j=2;
        for(int i=0; i<items.size(); i++) {
            if(items[i][j]==rV) res++;
        }
        return res;
    }
};