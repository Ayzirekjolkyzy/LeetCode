class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="", b="";
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='#') {
                if(a.size()>0) {
                    a.erase(a.begin()+a.size()-1);
                }
            }
            else a+=s[i];
        }
        for(int i=0; i<t.size(); i++) {
            if(t[i]=='#') {
                if(b.size()>0) {
                    b.erase(b.begin()+b.size()-1);
                }
            }
            else b+=t[i];
        }
        return a==b;
    }
};