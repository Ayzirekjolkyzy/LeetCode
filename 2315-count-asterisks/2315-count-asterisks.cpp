class Solution {
public:
    int countAsterisks(string s) {
        bool k=false; int ans=0;
        for(int i=0; i<s.size(); i++) {
            if(!k&&s[i]=='*') ans++;
            if(s[i]=='|') {
                if(!k) k=true;
                else  k=false;
            }
        }
        return ans;
        
    }
};