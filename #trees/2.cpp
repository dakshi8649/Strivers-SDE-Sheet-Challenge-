/* Problem Link 
https://leetcode.com/problems/binary-tree-preorder-traversal/
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode *> st;
        while(root!=NULL || !st.empty()){
        if(root!=NULL){
            v.push_back(root->val);
            st.push(root);
            root=root->left;
        }
        else{
            root = st.top();
            st.pop();
            root=root->right;
        }
        }
        return v;
    }
};