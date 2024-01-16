class Solution {
public:
    vector<int> finalPrices(vector<int>& pr) {
        for(int i=0; i<pr.size()-1; i++) {
            for(int j=i+1; j<pr.size(); j++) {
                if(pr[i]>=pr[j]) { pr[i]-=pr[j]; break;
                                 } 
            }
            }
        return pr;
    }
};