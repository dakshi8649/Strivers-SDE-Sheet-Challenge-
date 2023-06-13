/* Problem Link
https://leetcode.com/problems/binary-tree-postorder-traversal/description/
*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        stack<TreeNode *> st;
        stack<int> s;
        st.push(root);
        while(!st.empty()){
            TreeNode *t = st.top();
            st.pop();
            s.push(t->val);
            
            if(t->left){
                st.push(t->left);
            }
            if(t->right){
                st.push(t->right);
            }
        }
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        return v;
        
    }
};