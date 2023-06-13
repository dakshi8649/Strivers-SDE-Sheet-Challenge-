/*Problem link
https://leetcode.com/problems/binary-tree-inorder-traversal/description/
*/
class Solution {
public:
    vector<int>v;
    void inorder(TreeNode *p){
          if(!p) return;    
            inorder(p->left);
            v.push_back(p->val);
            inorder(p->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        // stack<TreeNode *> st;
        // while(root!=NULL || !st.empty()){
        //     if(root!=NULL){
        //         st.push(root);
        //         root=root->left;
        //     }
        //     else{
        //         root=st.top();
        //         st.pop();
        //         v.push_back(root->val);
        //         root=root->right;
        //     }
        // }
        inorder(root);
    return v;
    }
};