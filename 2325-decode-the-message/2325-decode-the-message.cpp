class Solution {
public:
    string decodeMessage(string k, string m) {
        string key1="";
        for(int i=0; i<k.size(); i++) {
            if(isalpha(k[i])&&(key1.find(k[i])==std::string::npos)) key1+=k[i];
        }
        for(int i=0; i<m.size(); i++) {
            if(isalpha(m[i])) {
                 for(int j=0; j<key1.size(); j++) {
                     if(m[i]==key1[j]) { m[i]=((j%27)+97); break;  } 
                }
            }
          
        }
        return m;

    }
};