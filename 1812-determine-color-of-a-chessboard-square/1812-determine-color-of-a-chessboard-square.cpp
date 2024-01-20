class Solution {
public:
    bool squareIsWhite(string c) {
        if((int(c[0])+int(c[1]))%2) return true;
        return false;
    }
};