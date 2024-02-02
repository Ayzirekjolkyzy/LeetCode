class Solution {
public:
    string finalString(string s) {
        string ret="";
        for(auto i : s) {
            if(i=='i') {
                reverse(ret.begin(), ret.end());
            }
            else ret+=i;
        }
        return ret;
    }
};