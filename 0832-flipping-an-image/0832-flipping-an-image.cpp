class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ret(image.size(), vector<int>(image[0].size()));
        for(int i=0; i<image.size(); i++) {
            for(int j=image[i].size()-1, a=0; j>=0; a++, j--) {
                if(image[i][j]==0) ret[i][a]=1;
                else ret[i][a]=0;
            }
        }
        return ret;
    }
};