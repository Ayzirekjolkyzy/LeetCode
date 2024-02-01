class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ret;
        string temp=""; temp+=s[0]; temp+='1';
        int n=s[3]-s[0];
        for(int i=0; i<=n; i++) {
            for(char j=s[1]; j<=s[4]; j++) {
                temp[1]=j;
                ret.push_back(temp);
            }
            temp[0]++;
        }
        return ret;
    }
};