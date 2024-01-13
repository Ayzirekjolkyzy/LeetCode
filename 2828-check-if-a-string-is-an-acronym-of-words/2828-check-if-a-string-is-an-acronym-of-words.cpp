class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res = "";
        for(auto & w : words){
            res += w[0];
        }
        return res == s;
    }
};