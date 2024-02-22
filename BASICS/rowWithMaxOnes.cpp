class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count;
        int index = 0;
        int mcount = 0;
        for (int i = 0 ; i<n ; i++){
            count = 0;
            for (int j = 0; j<m ;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if (count>mcount){
                mcount = count;
                index = i;
            }
        }
        vector<int> ab = {index,mcount};
        return ab;
    }
};
