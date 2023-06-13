/*Problem Link
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
*/
void func(Node* root,int level,vector<int> &levelvec,vector<int> &v){
    if(root){
    if(levelvec[level]==0){
        v.push_back(root->data);
        levelvec[level]=1;
    }
    func(root->left,level+1,levelvec,v);
    func(root->right,level+1,levelvec,v);
    }
    return;
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;vector<int> levelvec(N,0);
   if(root==NULL){
       return v;
   }
   func(root,1,levelvec,v);
   return v;
   
}
