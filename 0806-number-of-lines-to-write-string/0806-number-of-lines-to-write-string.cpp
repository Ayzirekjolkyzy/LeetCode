class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int line=1, lastline=0;
        for(int i=0; i<s.size(); i++) {
            if(lastline+w[s[i]-97]<=100) lastline=lastline+w[s[i]-97];
            else { line++;
                  lastline=w[s[i]-97]; }
        }
        return {line, lastline};
    }
};