/*Problem Link
https://www.codingninjas.com/codestudio/problems/path-in-a-tree_3843990?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
*/
#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/

bool func(TreeNode<int> *root,int x,vector<int>& ans){
	if(root==NULL) return false;
	ans.push_back(root->data);
	if(root->data==x) return true;
	if(func(root->left,x,ans)||func(root->right,x,ans)) return true;

	ans.pop_back();
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	func(root,x,ans);
	return ans;
}
