class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.size()) return false;
        int i=0;
        for(auto & w : words){
            if(s[i++]!=w[0]) return false;
        }
        return true;
    }
};