/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
  public:
    vector <int> bottomView(TreeNode *root){
    	//your code goes here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>> q;
        map<int,int> mp;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int hd=it.second;
            mp[hd]=node->data;
            if(node->left) q.push({node->left,hd-1});
            if(node->right) q.push({node->right,hd+1});
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};
