class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> ans;
       if(root==NULL){
        return ans;
       }
       TreeNode* node=root;
       stack<TreeNode*> st;
       while(node!=NULL || !st.empty()){
        while(node!=NULL){
            st.push(node);
            node=node->left;
        }
        node=st.top();
        st.pop();
        ans.push_back(node->val);
        node=node->right;
       }
       return ans;

    }
};
