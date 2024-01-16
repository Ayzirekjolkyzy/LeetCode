class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0; bool k=true;
        for(int i=0; i<words.size(); i++) {
            k=true;
            for(int j=0; j<words[i].size(); j++) {
                if(allowed.find(words[i][j])==std::string::npos) { k=false; break; }
            }
            if(k) ans++;
            }
        return ans;
    }
};