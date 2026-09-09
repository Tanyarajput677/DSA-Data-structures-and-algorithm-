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
		vector<int> succPredBST(TreeNode* root,int key){
			//your code goes here
            int pred=-1;
            int succ=-1;
            TreeNode* curr=root;
            while(curr!=nullptr){
                if(curr->data<key){
                    pred=curr->data;
                    curr=curr->right;
                }
                else{
                   curr=curr->left; 
                }
        
            }
            curr=root;
            while(curr!=nullptr){
                if(curr->data>key){
                    succ=curr->data;
                    curr=curr->left;
                }
                else{
                    curr=curr->right;
                }
            }
            return {pred,succ};
		}
};
