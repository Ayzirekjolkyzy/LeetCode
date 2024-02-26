class Solution {
public:
    int minPartitions(string n) {
        char a='0';
        for(int i=0; i<n.size(); i++) {
            if(a<n[i]) a=n[i];
        }
        return int(a-'0');
    }
};