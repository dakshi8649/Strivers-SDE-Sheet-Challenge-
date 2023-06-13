/*Problem Link
https://leetcode.com/problems/maximum-width-of-binary-tree/
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
 #define ll long long
class Solution {
public:

    int widthOfBinaryTree(TreeNode* root) {
        ll ans=0;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,ll>> q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            ll mmin=q.front().second;
            ll first=0,last=sz-1; 
            for(int i=0;i<sz;i++){
                int ind = q.front().second-mmin;
                TreeNode *node=q.front().first;
                q.pop();
                if(i==0) first = ind;
                if(i==(sz-1)) last = ind;
               
                if(node->left) q.push({node->left,2*1ll*ind+1});
                if(node->right) q.push({node->right,2*1ll*ind+2});
            }
           ans=max(ans,last-first+1);
        }
        return ans;
    }
};