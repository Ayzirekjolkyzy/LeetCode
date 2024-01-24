class Solution {
public:
    int minimizedStringLength(string s) {
   set<char> ret;
        for(int i=0; i<s.size(); i++) {
            ret.insert(s[i]);
        }
        return ret.size();
    }
};