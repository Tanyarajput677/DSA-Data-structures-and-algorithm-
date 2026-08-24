/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
        void solve(TreeNode* root,vector<int>& path,vector<vector<int>>& ans){
            if(root==NULL){
                return;
            }
            path.push_back(root->data);
            if(root->left==NULL && root->right==NULL){
                ans.push_back(path);
            }
            solve(root->left,path,ans);
            solve(root->right,path,ans);
            path.pop_back();
        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            //your code goes here
            vector<vector<int>> ans;
            vector<int>path;
            solve(root,path,ans);
            return ans;
            

		}
};
