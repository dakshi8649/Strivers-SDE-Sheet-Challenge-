/*Problem Link
https://leetcode.com/problems/set-matrix-zeroes/description/
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> set_rows;
        vector<int> set_cols;
        int p = matrix.size();
        int q = matrix[0].size();
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                if(matrix[i][j]==0){
                    set_rows.push_back(i);
                    set_cols.push_back(j);
                }
            }
        }
        for(int i=0;i<set_rows.size();i++){
            for(int c=0;c<q;c++){
                matrix[set_rows[i]][c]=0;
            }
        }
        for(int i=0;i<set_cols.size();i++){
            for(int c=0;c<p;c++){
                matrix[c][set_cols[i]]=0;
            }
        }
    }
};