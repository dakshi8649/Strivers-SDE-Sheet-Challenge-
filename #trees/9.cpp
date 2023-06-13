/*Problem Link
https://www.codingninjas.com/codestudio/problems/981269?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
*/
#include <bits/stdc++.h> 
#define pb push_back
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void func(BinaryTreeNode<int> *root,vector<vector<int>>& ans){
    if(root==NULL) return;
    ans[1].pb(root->data);
    func(root->left,ans);
    ans[0].pb(root->data);
    func(root->right,ans);
    ans[2].pb(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans(3);
    func(root,ans);
    return ans;

}