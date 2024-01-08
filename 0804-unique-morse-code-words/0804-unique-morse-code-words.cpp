class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> mor={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       set<string> ret;
       string temp="";
       int k=0;
       for(int i=0; i<words.size(); i++) {
           for(int j=0; j<words[i].size(); j++) {
               temp+=mor[(int)words[i][j]-97];
           }
            ret.insert(temp);
            temp="";
       } 
       return ret.size();
    }
};