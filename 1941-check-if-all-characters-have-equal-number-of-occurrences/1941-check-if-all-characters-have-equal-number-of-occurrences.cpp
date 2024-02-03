class Solution {
public:
    bool areOccurrencesEqual(string s) {
        sort(s.begin(), s.end()); 
        set<int> ret;
        int temp=1; char t=s[0];
        for(int i=1; i<s.size(); i++) {
            if(s[i]==t) temp++;
            else {
                ret.insert(temp);
                temp=1; t=s[i];
            }
        } ret.insert(temp);
        if(ret.size()>1) return false;
        return true;
    }
};