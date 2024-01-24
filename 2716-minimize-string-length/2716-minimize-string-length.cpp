class Solution {
public:
    int minimizedStringLength(string s) {
  vector<bool> temp(26,0); int ret=0;
        for(int i=0; i<s.size(); i++) {
            if(!temp[s[i]-'a']) ret++;
            temp[s[i]-'a']=true;
        }
        return ret;
    }
};