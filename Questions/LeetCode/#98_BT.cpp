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
    bool isValidBST(TreeNode* root,long l=LONG_MIN,long r=LONG_MAX) {
        if(root==NULL) return true;
        return (l<root->val && r>root->val && isValidBST(root->left,l,root->val)&& isValidBST(root->right,root->val,r));
    }
};