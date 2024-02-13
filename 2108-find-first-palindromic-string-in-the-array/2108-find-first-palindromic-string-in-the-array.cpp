class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool k=false;
        for(int i=0; i<words.size(); i++) {
            k=false;
            if(words[i].size()==1) return words[i];
            for(int j1=0, j2=words[i].size()-1; j1<words[i].size()/2; j1++, j2--) {
                if(words[i][j1]!=words[i][j2]) { k=false;  break;}
                else k=true;
            } if(k) return words[i];
        }
        return "";
    }
};