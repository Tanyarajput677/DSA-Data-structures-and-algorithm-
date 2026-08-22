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
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) {
            return ans;
        }
        TreeNode* curr=root;
        TreeNode* prev=NULL;
        stack<TreeNode*> st;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            TreeNode* node=st.top();
            if(node->right !=NULL && prev!=node->right){
                curr=node->right;
            }
            else{
                ans.push_back(node->val);
                st.pop();
                prev=node;
            }
        }
        return ans;

        
    }
};
