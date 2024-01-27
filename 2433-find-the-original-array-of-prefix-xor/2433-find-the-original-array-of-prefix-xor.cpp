class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ret; 
        ret.push_back(pref[0]);
        int temp;
        for(int i=1; i<pref.size(); i++){
            temp=pref[i-1]^pref[i];
            ret.push_back(temp);
        }
        return ret;        
    }
};