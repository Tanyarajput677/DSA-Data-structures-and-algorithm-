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
    bool isleaf(TreeNode* root){
        return root->left==NULL && root->right==NULL;
    }
    void addleftboundary(TreeNode* root,vector<int>& ans){
        TreeNode* curr=root->left;
        while(curr){
            if(!isleaf(curr)){
                ans.push_back(curr->data);
            }
            if(curr->left){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }

        }
    }
    void addleaves(TreeNode* root,vector<int>& ans){
        if(isleaf(root)){
            ans.push_back(root->data);
            return;
        
        }
        if(root->left){
            addleaves(root->left,ans);

        }
        if(root->right){
            addleaves(root->right,ans);
        }

    }
    void addrightboundary(TreeNode* root,vector<int>& ans){
        TreeNode* curr=root->right;
        vector<int> temp;
        while(curr){
            if(!isleaf(curr)){
                temp.push_back(curr->data);
            }
            if(curr->right){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        reverse(temp.begin(),temp.end());
        for(int x:temp){
            ans.push_back(x);
        }

    }
    vector <int> boundary(TreeNode* root){
    	//your code goes here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        if(!isleaf(root)){
            ans.push_back(root->data);
        }
        addleftboundary(root,ans);
        addleaves(root,ans);
        addrightboundary(root,ans);
        return ans;
    }
};
