class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0, b=0;
        for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') a++;
             if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
       b++;     
        }
        if(a==b) return true;
        return false;
    }
};