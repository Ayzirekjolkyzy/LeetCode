class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ret(image.size(), vector<int>(image[0].size()));
        for(int i=0; i<image.size(); i++) {
            for(int j=image[i].size()-1, a=0; j>=0; a++, j--) {
               ret[i][a]=image[i][j]^1;
            }
        }
        return ret;
    }
};