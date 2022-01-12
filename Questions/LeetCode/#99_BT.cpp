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
    TreeNode* prev;
    TreeNode* x;
    TreeNode* y;
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->left);
        if(prev && prev->val > root->val){
            if(x==NULL) {
                x=prev;
                y=root;
            }
            else if(x){
                y=root;
                return;
            }
        }
        prev=root;
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        swap(x->val,y->val);
    }
};