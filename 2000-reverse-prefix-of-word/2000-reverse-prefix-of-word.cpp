class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n;
        for(int i=0; i<word.size(); i++) {
            if(word[i]==ch) { n=i+1; break; }
        }
        
        reverse(word.begin(), word.begin()+n);
        return word;
    }
};