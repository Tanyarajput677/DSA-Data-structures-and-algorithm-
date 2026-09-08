/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
        // Your code goes here
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        int left=0;
        int right=0;
        if(root->left){
            left=root->left->val;
        }
        if(root->right){
            right=root->right->val;
        }
        if(root->val!=left+right){
            return false;
        }
        return checkChildrenSum(root->left) && checkChildrenSum(root->right);


        
    }
};
