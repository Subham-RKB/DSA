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
    int ans=-1;
    int k=-1;
    void helper(TreeNode* root,int lvl){
        if(root==NULL){
            return;
        }
        if(lvl>k){
            k=lvl;
            ans=root->val;
        }
        helper(root->left,lvl+1);
        helper(root->right,lvl+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        helper(root,0);
        return ans;
    }
};