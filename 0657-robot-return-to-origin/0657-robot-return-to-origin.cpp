class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0, l=0;
        for(int i=0; i<moves.size(); i++) {
            if(moves[i]=='U') u++;
            else if(moves[i]=='D') u--;
            else if(moves[i]=='L') l++;
            else l--;
        }
        if(l==0&&u==0) return true;
        return false;
        
    }
};