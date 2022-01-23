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
    int k=0;
    TreeNode* helper(TreeNode* root,int total){
        if(root==NULL){
            return NULL;
        }
        helper(root->left,total);
        k+=root->val;
        root->val=total-k+root->val;
        helper(root->right,total);
        return root;
    }
    int total(TreeNode* root){
        if(root){
            return root->val+total(root->left)+total(root->right);
        }
        return 0;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int tot= total(root);
        return helper(root,tot);
    }
};