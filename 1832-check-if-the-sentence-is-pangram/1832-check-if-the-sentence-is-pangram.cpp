class Solution {
public:
    bool checkIfPangram(string sent) {
        sort(sent.begin(), sent.end());
        string ret=""; ret+=sent[0];
        for(int i=1; i<sent.size(); i++) {
            if(ret[ret.size()-1]!=sent[i]) ret+=sent[i];
        }
        if("abcdefghijklmnopqrstuvwxyz"!=ret) return false;
        return true;
    }
};