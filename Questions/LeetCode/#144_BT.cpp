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
    vector<TreeNode*> preorder;
    void helper(TreeNode* root){
        if(root==NULL){
            return;
        }
        preorder.push_back(root);
        helper(root->left);
        helper(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        helper(root);
        root->left=NULL;
        for(int i=1;i<preorder.size();i++){
            root->right= preorder[i];
            root=root->right;
            root->left=NULL;
        }
    }
};