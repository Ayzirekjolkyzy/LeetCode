class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ret;
        string temp=""; temp+=s[0]; temp+=s[1];
        int n1=s[3]-s[0], n2=s[4]-s[1];
        
        for(int i=0; i<=n1; i++) {
            for(int j=0; j<=n2; j++) {
                ret.push_back(temp);
                temp[1]++;
            }
            temp[0]++; temp[1]=s[1];
        }
        return ret;
    }
};