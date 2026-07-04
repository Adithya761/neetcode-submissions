class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> res;
        int n = mat.size();
        int m = mat[0].size();
        int top = 0;
        int left = 0;
        int right = mat[0].size() - 1;
        int bottom = mat.size() - 1;
        while(top <= bottom && left <= right){
            for(int j = left;j <= right;j++){
                res.push_back(mat[top][j]);
            }
            top++;
            for(int i = top;i <= bottom;i++){
                res.push_back(mat[i][right]);
            }
            right--;
           if(top <= bottom){
                for(int j = right;j>= left;j--){
                    res.push_back(mat[bottom][j]);
                }
                bottom--;
            }
           if(left <= right){
                for(int i = bottom;i>= top;i--){
                    res.push_back(mat[i][left]);
                }
                left++;
           }

        }
        return res;
    }
};
