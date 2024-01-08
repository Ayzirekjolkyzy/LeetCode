class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(); bool k=false;
        string a;
        if(s.size()==1) return true;
        for(int i=0; i<n; i++) {
            if(isalpha(s[i])) a.push_back(tolower(s[i]));
        else if(isdigit(s[i])) a.push_back(s[i]);}
        int m=a.size();    
        if(a.size()<2) return true;
        for(int i=0, j=m-1; i<m,j>=0; i++, j--) {
            if(a[i]==a[j]) k=true;
            else { k=false; break; }
            
        }
            return k;
        }

        
    
};