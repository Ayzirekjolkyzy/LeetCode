class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret={1};
        while(rowIndex>0) {
            for(int i=0; i<ret.size()-1; i++) {
                ret[i]=ret[i]+ret[i+1];
            }
            ret.insert(ret.begin(), 1);
            rowIndex--;
        }
        return ret;
    }
};