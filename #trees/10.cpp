/*Problem Link
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

void funcc(TreeNode* t,int level,int line,map<int,map<int,multiset<int>>>& m){
    if(t==NULL) return;
    m[line][level].insert(t->val);
    if(t->left) funcc(t->left,level+1,line-1,m);
    if(t->right) funcc(t->right,level+1,line+1,m);
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        map<int,map<int,multiset<int>>> m;
        funcc(root,0,0,m);
        for(auto it:m){
            vector<int> temp;
            map<int,multiset<int>> j = it.second;
            for(auto val:j){
                multiset<int> no=val.second;
                for(auto x:no){
                    temp.push_back(x);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
